#pragma config(Motor,  port2,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void clawOpen()
{
	motor [clawMotor]=100;
	wait1Msec (900);
	motor [clawMotor]=0;
}
void clawClose()
{
	motor [clawMotor]=-100;
	wait1Msec (900);
	motor [clawMotor]=0;
}
void armUp()
{
	motor [armMotor]=-100;
	wait1Msec (1690);
	motor [armMotor]=0;
}
void armDown()
{
	motor [armMotor]=100;
	wait1Msec (1690);
	motor [armMotor]=0;
}

//hi
task main()
{
	while (true)
	{
		if (vexRT [Btn8D]==1)
		{
			clawOpen();
		}
		if (vexRT [Btn8R]==1)
		{
			clawClose();
		}
		if (vexRT [Btn8U]==1)
		{
			armUp();
		}
		if (vexRT [Btn8L]==1)
		{
			armDown();
		}
		{
		motor[port2] = vexRT[Ch2]/2;
		motor[port3] = vexRT[Ch3]/2;
		}
	}



}