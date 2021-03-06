#pragma config(Motor,  port2,           motor1,        tmotorVex393HighSpeed_HBridge, openLoop)
#pragma config(Motor,  port3,           motor2,        tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port4,           motor3,        tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port5,           motor4,        tmotorVex393HighSpeed_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int speed = 127;
	int delta = 10;

	int Btn8DPressed = 0;
	int Btn8UPressed = 0;
	int Btn8RPressed = 0;

	while(1 == 1)
	{
		if (vexRT[Btn8D])
		{
			Btn8DPressed = 1;
			if (Btn8DPressed == 1)
			{
				speed = speed - 10;
				//speed -= 10;
				//if(speed < 0)
				//	speed = 0;
				Btn8DPressed = 0;
			}
		}

		if (vexRT[Btn8U])
		{
			Btn8UPressed = 1;

			if (Btn8UPressed == 1)
			{
				speed = speed + delta;
				//if(speed > 127)
				//	speed = 127;
				Btn8UPressed = 0;
			}
		}

		// THIS IS WORKING CODE. EVERYTHING ELSE DOESN'T WORK. WHY?
		//===========================================================
		if(vexRT[Btn8R])
		{
			Btn8RPressed = 1;

			while(speed != 55)
			{
				speed = speed - 10 ;

				motor[motor1] = speed;
				delay(10000);
			}
		}
		//============================================================

		if (vexRT[Btn6U] == 1)
		{
			motor[motor1] = speed;
			motor[motor2] = speed;
			motor[motor3] = speed;
			motor[motor4] = speed;
		}
		else
		{
			motor[motor1] = 0;
			motor[motor2] = 0;
			motor[motor3] = 0;
			motor[motor4] = 0;
		}
	}
}
