#ifndef MAIN_SA_14_H_
#define MAIN_SA_14_H_


#include <stdio.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/adc.h"
#include "esp_adc_cal.h"

void sa_controller_task();

int public_sa_14_raw;
int public_sa_14_mv;


#endif