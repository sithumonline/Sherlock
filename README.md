# Sherlock
program for Sherlock robot

SHERLOCK – The Two Wheeler
විශේෂාංග
•	සහාය ක්ෂුද්‍ර සකසන (Supported Devices)
o	Arduino Nano (Atmega Microcontrollers)
•	ජව සැපයුම (Power)
o	Li-Ion Rechargeable Battery
•	Programming Mode
o	USB
•	Features
o	Two DC geared motors
o	Line Sensor Array
o	Three Proximity Sensors
o	Onboard Battery Charger
o	Analog Potentiometer
•	සවිකල හැකි මොඩියුල (AddOns)
o	WiFi module
o	Bluetooth module
පහසුවෙන් නිම කළ හැකි මෙහෙයුම් 
•	Floor detection
•	Line Following & Maze solving
•	Obstacle detection
•	Obstacle avoidance
•	Wall following
•	Bluetooth or Wifi remote control
අඩංගු උපාංග
•	ඉලෙක්ට්‍රොනික උපාංග
o	මුද්‍රිත පරිපථ පුවරු		1
o	Arduino Nano පුවරු		1
o	බැටරි				1
o	ප්‍රතිරෝධක
	R1, R2, R5, R7, R9, R10, R20		1k (7)
	R3, R4, R6, R8, R11, R14, R15, R17	10k (8)
	R16					1.8k (1)
	R18					330 (1)
	R19					100 (1)
o	ධාරිත්‍රක
	C1, C2, C3, C4, C5, C6, C7, C9, C11	100nF (9)
	C8, C10				10uF (2)
o	ඩයෝඩ
	D1, D4					(2)
o	ට්‍රාන්සිස්ටර්
	Q2, Q5					2N3904 (2)
	Q1					(1)
o	සෙන්සර්
	U2, U3, U4, U5, U6, U7, U9, U10 	Opto Sensor (8)
o	කනෙක්ටර්
	P1					4x2 (1)
	P2, P3					15x1(2)
	P4, P5, P6, P10				2x1 (4)
	P7, P8, P9, P12				4x1 (4)
	P11					3x1 (1)
o	ස්විච්
	S1					DPDT (1)
	PB1, PB2				PB (2)
o	IC
	U1					CD4017 (1)
o	LED				11
•	යාන්ත්‍රික උපාංග
o	රෝද 				2
o	කැස්ටර් වීල්			1
o	ඇසෙම්බ්ලි පුවරු			1
o	බැටරි රැඳවුම්			1
o	සෙ.මි 3, ඉස්කුරුප්පු ඇණ		4
o	සේ.මි 1, ඉස්කුරුප්පු ඇණ		2
o	ඉස්කුරුප්පු නට්			6
o	මෝටර්				2
පරිපථය පෑස්සීම
1.	පරිපථය පෑස්සීම සඳහා 20W ~ 40W පමණ පාහනයක් භාවිතා කරන්න.
2.	පෑස්සීම ප්‍රතිරෝධක වලින් අරඹන්න.
3.	පහත පිළිවෙල පෑස්සුම සඳහා අනුගමනය කිරීමෙන් පෑස්සුම් ක්‍රියාවලිය පහසු වනු ඇත
a.	දියෝඩ
b.	IC
c.	ධාරිත්‍රක
d.	ට්‍රාන්සිස්ටර්
e.	සෙන්සර්
f.	ස්විච්
g.	LED
h.	කනෙක්ටර්



සවි කිරීම
•	බැටරි රැඳවුම ඉස්කුරුප්පු ඇණ භාවිතයෙන් චැසියට සවි කරන්න
•	
1.	පළමුව රෝද මෝටර් වලට සවි කරන්න.
    
2.	T හැඩ ඇති රැඳවුම් හතර ප්‍රධාන චසියට ඇතුළු කරන්න

 

3.	මෝටර ස්ථානගත කර ඉස්කුරුප්පු ඇණ ආධාරයෙන් ඒවා චැසියට සවි කරන්න
 
 
4.	කැස්ටර් විලය ඉස්කුරුප්පු ඇණ ආධාරයෙන් චැසියට සවි කරන්න
 
5.	බැටරි රැඳවුම ඉස්කුරුප්පු ඇණ භාවිතයෙන් චැසියට සවි කරන්න
 
6.	මුද්‍රිත පරිපථ පුවරුව ප්‍රධාන චැසියට සවි කරන්න
 
7.	මෝටර් වයර් සහ බැටරි වයර් අදාළ කනෙන්ටර් වෙත සවි කරන්න.
8.	බැටරිය බැටරි රැඳවුමට සවි කරන්න
9.	Arduino Nano පුවරුව, මුද්‍රිත පරිපථයේ අදාළ headerට සවි කරන්න
 
පණ ගැන්වීම
•	පළමුවර පණ ගැන්වීමට ප්‍රථම නැවත සියල්ල නිවැරදිදැයි පරික්ෂා කර බලන්න
•	S1 ස්විච්චිය වරක් එබීමෙන් පද්ධතිය පණ ගන්වන්න.
