#pragma config(Motor,  port2,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop)


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
