/**
RearRightMotor.ino

Purpose: This Sketch contains actual PWM-control
of rear right motor and PID-regulation

@author Prince Balabis
@author Ali Rama
*/

static void Thread6(void *arg) {
	//START of one-run setup program

	//Local variables
	double reRM_Setpoint = 8;
	double reRM_Output;

	//Specify the links and initial tuning parameters
	PID reRM_PID(preRM_PIDInput, &reRM_Output, &reRM_Setpoint,
		28, 0, 0, DIRECT);

	// Pin for motor
	const int reRM_Pin = 5;

	//turn the PID on
	reRM_PID.SetMode(AUTOMATIC);

	//Setup PID
	reRM_PID.SetControllerDirection(DIRECT);
	reRM_PID.SetOutputLimits(40, 150);

	//Setup motor pin
	pinMode(reRM_Pin, OUTPUT);

	//END of one-run setup program
	while (1){ //Start of infinite loop for thread
		reRM_PID.Compute();
		analogWrite(reRM_Pin, reRM_Output);

		//Serial.print("RIGHT INPUT:  ");
		//Serial.print(reRM_PIDInput);
		//Serial.println();

	} //END of infinite loop for thread
}

