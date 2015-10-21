#pragma config(Sensor, in1,    gyro,           sensorGyro)
#pragma config(Sensor, dgtl1,  encoderr,       sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  encoderl,       sensorQuadEncoder)
#pragma config(Motor,  port2,           frontr,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           backr,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           frontl,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           backl,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           flyr,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           flyl,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           armt,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           armb,          tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//*THIS IS 241E'S Forked Version*//

/**
 * @file    main.c
 * @brief   This file contains the base for competiton code.
 * @details The three sections include Pre-Auton, Auton, and User
 *          Control.
 *
 * @author		Sean Kelley      sgtkode01@gmail.com
 * @author		Bernard Suwirjo  bsuwirjo@gmail.com
 * @author 		Spencer Couture  spence.couture@gmail.com
 */


#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(120)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

// all functions for competition code
#include "functions.c"



/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Pre-Autonomous
//
/////////////////////////////////////////////////////////////////////////////////////////

/**
 * Period before autonomous when bot cannot move, but minimal code can run
 */
void pre_auton()
{
 bStopTasksBetweenModes = true;
}



/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous
//
/////////////////////////////////////////////////////////////////////////////////////////

/**
 * Period of match when bot is using only code to operate.
 */

task e_stop(){
	
} 

task drive(){
	auto_drive_forward(100,3);
	
}

task intake(){
	auto_intake_balls(100,3);
	
}
 
task flywheel(){
	auto_spin_flywheel(118,3,true);	
	
}
 
task autonomous(){
	StartTask(drive);
	StartTask(intake);
	StartTask(flywheel);
	while(true){
		
		
		
	}
	
}



/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
/////////////////////////////////////////////////////////////////////////////////////////

/**
 * Period of match when driver controls the bot
 */
task usercontrol(){
	
	//auto_spin_flywheel(118,5,true);
	while (true){
		if(bVEXNETActive){
			if(vexRT[Btn8L] == 1){
				spin_flywheel(112);

			}

			if(vexRT[Btn8U] == 1){
				motor[flyr] = 0;
				motor[flyl] = 0;
				motor[armb] = 0;
				motor[armt] = 0;

			}


			/////////////////////////////////////////////////////////////////////////////////////////
			//
			//                                      Drive
			//
			/////////////////////////////////////////////////////////////////////////////////////////
			motor[backr] = vexRT[Ch2];
			motor[frontr] = vexRT[Ch2];
			motor[backl] = -vexRT[Ch3];
			motor[frontl] = vexRT[Ch3];
			wait1Msec(10);
		}
	}
}
