#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sensor.h"
#include "logger.h"

int main()
{
    srand(time(NULL));

    init_logger("sensor_log.csv");

    for (int t = 0; t < 100; t++)
    {
        SensorData data = generate_sensor_data(t);

        log_data(data);

        printf("T=%d Temp=%.2f Speed=%.2f\n",
               data.timestamp,
               data.temperature,
               data.speed);
    }

    close_logger();

    return 0;
}