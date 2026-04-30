/*
This file contains the defination of the function generate_sensor_data
*/

#include <stdlib.h>     //including stand. lib for functions like rand()
#include "sensor.h"     //including sensor.h header file

SensorData generate_sensor_data(int timestamp){     //Declaration of SensorData Strut and associated function defination

    SensorData data;        //assigning local variable data
    data.timestamp = timestamp;     //declaring the input as timestamp
    
    data.temperature = 20.0f + (rand()%1500)/100.0f;        //setting temp range from 20-35 with floating points for memory management
    data.speed = (rand()%1200)/100.0f;      //0-120 kmph speed range with memory maangement as assigning 32-bit memory by "f"

    return data;        //returning the data local variable
}