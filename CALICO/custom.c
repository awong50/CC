task main()
{

	while (1 == 1) {
		if (SensorValue[dgtl6] > 8) {
			motor[rightMotor] = 127 / 2;
			motor[leftMotor] = 127 / 2;
            turnLEDOn(LED);
		}
		if (SensorValue[dgtl6] == 8 || SensorValue[dgtl6] == 7) {
			int orignal = SensorValue[dgtl8];
			while (abs(SensorValue[dgtl8] - 480) < abs(orignal - 480) || abs(SensorValue[dgtl8] - 480) > abs(orignal - 480)) {
				motor[rightMotor] = 127 / 2;
				motor[leftMotor] = -127 / 2;
			}
			motor[rightMotor] = 0;
			motor[leftMotor] = 0;
            turnLEDOn(LED);
		}

        if (SensorValue[dgtl10] == 1) {
            motor[rightMotor] = 0;
            motor[leftMotor] = 0;
            turnLEDOn(LED);
        }

        if (SensorValue[dgtl11] != 1) {
            motor[clawMotor] = 50; // Whatever makes it go down
            turnLEDOn(LED);
        }

        if (SensorValue[in1] <= 500) {
            motor[flashlight] = 127;
        }

		else {
			motor[rightMotor] = 0;
			motor[leftMotor] = 0;
            motor[clawMotor] = 0;
            turnLEDOff(LED);
            motor[flashlight] = 0;
		}
	}
}
