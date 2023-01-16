#include "ctdata.h"

#define ACrange 120;
#define REG_VOL_START 0x20

/***************************************************************
------------------------CT SENOSR DATA--------------------------
****************************************************************/
float ACCurrtntValue = 0;
float peakVoltage = 0;
float voltageVirtualValue;
const double offset = 0;   // Half the ADC max voltage
const int numTurns = 3000; // 1:3000 transformer turns
const int rBurden = 100;   // Burden resistor value

float readACcurrentValue(int fd)
{

    float ACCurrtntValue = 0;
    float peakVoltage = 0;
    float voltageVirtualValue = 0; // Vrms
    for (int i = 0; i < 5; i++)
    {
        peakVoltage += wiringPiI2CReadReg16(fd, REG_VOL_START + 4);
        delay(1);
    }
    peakVoltage = peakVoltage / 5.0;
    voltageVirtualValue = peakVoltage * 0.707;
    voltageVirtualValue = (voltageVirtualValue / 4096 * 3.3);
    // voltageVirtualValue = (voltageVirtualValue / rBurden )*3000;
    // voltageVirtualValue = voltageVirtualValue * 0.707;
    ACCurrtntValue = voltageVirtualValue * ACrange;
    // printf("%f",ACCurrtntValue);

    return ACCurrtntValue;
}