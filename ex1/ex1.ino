#include <QTRSensors.h>

#define NUM_SENSORS             5  // number of sensors used
#define NUM_SAMPLES_PER_SENSOR  4  // average 4 analog samples per sensor reading
#define EMITTER_PIN             10  // emitter is controlled by digital pin 2
QTRSensorsAnalog qtra((unsigned char[]) {
  0, 1, 2, 3, 4
},
NUM_SENSORS, NUM_SAMPLES_PER_SENSOR, EMITTER_PIN);

unsigned int sensorValues[NUM_SENSORS];

const int mid_s = A7,lft_s=A5,rgt_s=A6;
int sensorMid = 0,sensorLft = 0,sensorRgt = 0;  


#define PWM0A  5
#define PWM0B 6
#define DIRA  9
#define DIRB  8



void setup() {
  Serial.begin(9600);
  pinMode(PWM0A, OUTPUT);
  pinMode(PWM0B, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  analogReference(EXTERNAL);
  for (int i = 0; i < 45; i++)  // make the calibration take about 10 seconds
  {
    if (i < 10)
      setSpeeds(-180, 180);
    else if (i < 30)
      setSpeeds(180, -180);
    else
      setSpeeds(-180, 180);
    qtra.calibrate();       // reads all sensors 10 times at 2.5 ms per six sensors (i.e. ~25 ms per call)
  }
  setSpeeds(0, 0);
}

const int maximum = 255;

int max_read = 0;
int min_speed = 0;

void loop() {
  sensorLft=  analogRead(lft_s);
  sensorRgt=  analogRead(rgt_s);
  sensorMid=  analogRead(mid_s);
  if(sensorMid<800){
    if(sensorLft<800){
      setSpeeds(maximum,-maximum);
      }else{
        setSpeeds(-maximum,maximum);
        }
      delay(100);
    
    }
  int position = qtra.readLine(sensorValues);
  int proportional = ((int)position) - 2000;
  int power_difference = proportional / 4; // + integral/10000 + derivative*3/2;
  Serial.println(power_difference);
  if (power_difference > -10 && power_difference < 10) {
    setSpeeds(maximum, maximum);
  } else if (power_difference > 0) {
    setSpeeds(-abs(power_difference), maximum);
  } else {
    setSpeeds( maximum, -abs(power_difference));

  }

  // setSpeeds( maximum, -maximum);


}


void setM2Speed(int speed)
{

  unsigned char reverse = 0;

  if (speed < 0)
  {
    speed = -speed; // make speed a positive quantity
    reverse = 1;  // preserve the direction
  }
  if (speed > 0xFF) // 0xFF = 255
    speed = 0xFF;

  if (reverse)
  {

    digitalWrite(DIRB, HIGH);
    analogWrite(PWM0B, 0xFF - speed);
  }
  else  // forward
  {
    digitalWrite(DIRB, LOW);
    analogWrite(PWM0B, speed);

  }

}

void setM1Speed(int speed)
{

  unsigned char reverse = 0;

  if (speed < 0)
  {
    speed = -speed; // make speed a positive quantity
    reverse = 1;  // preserve the direction
  }
  if (speed > 0xFF) // 0xFF = 255
    speed = 0xFF;

  if (reverse)
  {

    digitalWrite(DIRA, HIGH);
    analogWrite(PWM0A, 0xFF - speed);
  }
  else  // forward
  {
    digitalWrite(DIRA, LOW);
    analogWrite(PWM0A, speed);

  }

}
void setSpeeds(int m1Speed, int m2Speed)
{
  setM1Speed(m1Speed);
  setM2Speed(m2Speed);
}

