#include <FreeRTOS_ARM.h>
#include <PID_v1.h>

extern double* pfrRM_PIDInput;
extern double* pfrLM_PIDInput;

extern double* preRM_PIDInput;
extern double* preLM_PIDInput;

extern int runFrontCalibration = 0;
extern int runRearCalibration = 0;
extern int startDriving = 0;

//Buzzer-beep Semaphore
//xSemaphoreHandle buzzerSem;
//extern double* pbuzzerSem = &buzzerSem;

void setup() {
	// Start serial


	xTaskCreate(Thread1, NULL, configMINIMAL_STACK_SIZE, NULL, 3, NULL); //Front LineSensorSystems
	xTaskCreate(Thread2, NULL, configMINIMAL_STACK_SIZE, NULL, 3, NULL); // Rear LineSensorSystems
	

	// Tasks for fan controllers
	xTaskCreate(Thread8, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //LiftFanMotorController
	xTaskCreate(Thread3, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //FrontLeftMotorController
	xTaskCreate(Thread4, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //FrontRightMotorController
	xTaskCreate(Thread5, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //RearRightMotorController
	xTaskCreate(Thread6, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //RearLeftMotorController
	xTaskCreate(Thread7, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //ForwardPropulsionController

	//Tasks for additional functions
	//xTaskCreate(Thread9, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //Buzzer
	//xTaskCreate(Thread10, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); //BluetoothModule

	// start scheduler
	vTaskStartScheduler();
	Serial.println(F("Insufficient RAM"));
	while (1);
}

void loop() {
	// Not used
}