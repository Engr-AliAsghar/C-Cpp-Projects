#include <stdio.h>
#include "logger.h"

static FILE *file = NULL;   //static to encapsulate file from other misunderstood usage and data currouption
                            //using file pointer FILE *

void init_logger(const char *filename)  //logger init
{
    file = fopen(filename, "w");    //opening file in write mode
    if (file == NULL) {     //if file cannot be opened
        printf("Error opening file!\n");
        return;
    }

    // CSV header
    fprintf(file, "timestamp,temperature,speed\n");     //writing csv header
}

void log_data(SensorData data)      //using SensorData struct
{
    if (file != NULL) {
        fprintf(file, "%d,%.2f,%.2f\n",     //upto 2 decimal points for observations
                data.timestamp,
                data.temperature,
                data.speed);
    }
}

void close_logger()     //logger de_init
{
    if (file != NULL) {
        fclose(file);
    }
}