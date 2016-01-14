task intake(){
	bool unpressed = false;

	while(true){
		if(bVEXNETActive){

			//defaults to this
			//if the button has been unpressed from after turning the motors off
			if(unpressed == false){
				if(vexRT[Btn7D] == 1){
					motor[armt] = -75;
					motor[armb] = -75;
					while(vexRT[Btn7D] == 1){
						wait1Msec(1);
					}
					if(vexRT[Btn7D] == 0){
						unpressed = true;
					}
				}

			}

			//if the button has been unpressed from after turning the motors on
			if(unpressed == true){
				if(vexRT[Btn7D] == 1){
					motor[armt] = 0;
					motor[armb] = 0;
					while(vexRT[Btn7D] == 1){
						wait1Msec(1);
					}
					if(vexRT[Btn7D] == 0){
						unpressed = false;

					}
				}

			}

			//so this loop doesn't hog the cpu
			wait1Msec(10);

		}
	}

}

/**
* Uses one button to toggle on/off for flywheel
* Uses three buttons to change speed modes
*/
task flywheel(){
	bool unpressed = false;
	int speed_select = 118;
	bool selpressed = false;

	while(true){
		if(bVEXNETActive){

				//defaults: speed_select = 118 && unpressed = false
			//if the button has been unpressed from after turning the motors off
			if(unpressed == false){
				if(vexRT[Btn8D] == 1){
					spin_flywheel(speed_select);
					while(vexRT[Btn8D] == 1){
						wait1Msec(1);
					}
					if(vexRT[Btn8D] == 0){
						unpressed = true;

					}
				}

			}

			//if the button has been unpressed from after turning the motors on
			if(unpressed == true){
				if(vexRT[Btn8D] == 1){
					motor[flyr] = 0;
					motor[flyl] = 0;
					motor[exr] = 0;
					motor[exl] = 0;
					while(vexRT[Btn8D] == 1){
						wait1Msec(1);
					}
					if(vexRT[Btn8D] == 0){
						unpressed = false;

					}
				}

			}

			//so this loop doesn't hog the cpu
			wait1Msec(10);
		}

	}

}

/**
* Uses two different buttons to switch on/off reverse drive
*/
task drive(){
	bool initial = true;

	while(true){
		if(bVEXNETActive){

			while(initial == true){
				//sets drive to a regular state
				motor[backr] = vexRT[Ch2];
				motor[frontr] = vexRT[Ch2];
				motor[backl] = -vexRT[Ch3];
				motor[frontl] = -vexRT[Ch3];
				if (vexRT[Btn5U] == 1){
					initial = false;

				}

			}

			while(initial == false){
				//sets the drive to reverse
				motor[backr] = -vexRT[Ch3];
				motor[frontr] = -vexRT[Ch3];
				motor[backl] = vexRT[Ch2];
				motor[frontl] = vexRT[Ch2];
				if(vexRT[Btn6U] == 1){
					initial = true;
				}

			}

		//so this loop doesn't hog the cpu
		wait1Msec(10);

		}
	}

}
