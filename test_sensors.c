#pragma config(Sensor, dgtl8,  sonarSensor,    sensorSONAR_raw)
#pragma config(Motor,  port2,           motor2,        tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	wait1Msec(2000);

	writeDebugStream("Hello");
	while(true)
	{
		motor[motor2] = 63;
	}

}
