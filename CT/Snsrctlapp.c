#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <asm/ioctl.h>

#include <postgresql/libpq-fe.h>
#include <time.h>
#include "wiringPi.h"
#include "wiringPiI2C.h"
#include "ctdata.h"
////////////////////////////////////////////////
#define ACrange 120;
#define ADC_CHAN_NUM 8
#define ADC_DEFAULT_IIC_ADDR 0x04
#define REG_RAW_DATA_START 0x10
#define REG_VOL_START 0x20
#define REG_RTO_START 0x30
#define REG_SET_ADDR 0xC0

/********************************
 --------------------------------
*********************************/

int main()
{

    float Current_Value = 0;
    // float Rate_of_Current_Value_per_min = 0;

    /*************************************************************
    ------------------------ postgres database------------------
    *************************************************************/
    PGconn *conn = NULL;
    PGresult *res = NULL;

    conn = PQconnectdb("user=postgres password=postgres dbname=testdb1 host=localhost");
    PQexec(conn, "CREATE TABLE IF NOT EXISTS SensorData(id serial primary key,acquisition_time varchar(255) not null, power double precision, channel_id integer)");


    int fd = wiringPiI2CSetup(ADC_DEFAULT_IIC_ADDR);
    if (fd == -1)
    {
        printf("I2C communication fail ");
        return -1;
    }
    else
        printf("I2C communication start");

    while (1)
    {
        time_t tm;
        time(&tm);
        for (int k = 0; k < 60; k++)
        {

            float ACCurrentValue = readACcurrentValue(fd); // read AC Current Value
            printf("\nA=%f", ACCurrentValue);
            Current_Value += ACCurrentValue;
            delay(1000);
        }
        float Rate_of_Current_Value_per_min = Current_Value / 60;
        printf("\n%s", ctime(&tm));
        printf("\tRate of Current in a min(Am)=%f ", Rate_of_Current_Value_per_min);
        /******************************************************************************
         -----------------------------------------------------------------------------
        *******************************************************************************/
        char sql[500];
        sprintf(sql, "INSERT INTO SensorData (acquisition_time, power, channel_id) VALUES (NOW() ,%f,'3')", Rate_of_Current_Value_per_min);
        PQexec(conn, sql);
    }
}
