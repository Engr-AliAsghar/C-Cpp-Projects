/*

This file contains the logger initialization, logging, and deini.
These functions are to be used in main.c
*/

#ifndef LOGGER_H    //checking that logger.c is not added twice
#define LOGGER_H    //defining the file

#include "sensor.h"     //to use the SensorData Struct

void init_logger(const char *filename);
void log_data(SensorData data);
void close_logger();

#endif      //closing the if statement