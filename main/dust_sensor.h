#ifndef MAIN_DUST_SENSOR_H_
#define MAIN_DUST_SENSOR_H_

#include <stdio.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/adc.h"
#include "esp_adc_cal.h"
#include "driver/mcpwm.h"
#include "soc/mcpwm_reg.h"
#include "soc/mcpwm_struct.h"


void dust_gpio_init();
void dust_sensor_start();
void dust_measuring();

int public_voltage;
float public_dust_density;


#endif