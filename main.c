//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


/**
 * @file    main.c
 * @brief   This file contains the base for competiton code.
 * @details The three sections include Pre-Auton, Auton, and User
 *          Control.
 *
 * @author		Sean Kelley     sgtkode01@gmail.com
 *
 */


#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
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
task autonomous(){

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
	while (true) {
		if(bVEXNETActive){

			wait10Msec(1);
		}
	}
}
