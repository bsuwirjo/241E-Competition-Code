/*
If you have come accross this, GOOD JOB!
You have successfully set up github at home!
Try to explain what this function does:
(in comments like this)
*/

void function_(float final_speed){
	int speed = 0;
	while (speed < final_speed){
		motor[flyr] = speed;
		motor[flyl] = -speed;
		speed = speed + 10;
		wait1Msec(300);


	}

}

/* comment in here:
It makes the fly wheel, I'm guessing, move +10 after waiting 3 seconds
*/
