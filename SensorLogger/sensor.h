/*
This header file defines the structure of the sensor data 
which contains three fields namely temperature, speed and timestamp
A function generate_sensor_data with input timestamp as int used to 
get SensorData value
*/

#ifndef SENSOR_H    //checking that file is not defined earlier to aviod repetitive compilation
#define SENSOR_H    //defining the file

typedef struct {    //defination of SensorData

    int timestamp;
    float temperature;
    float speed;
} SensorData;
SensorData generate_sensor_data(int temperature);

#endif  //closing the if statement
