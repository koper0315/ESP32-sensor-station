#ifndef MAIN_BUZZER_H_
#define MAIN_BUZZER_H_

#include "driver/gpio.h"
#include "driver/ledc.h"
#include "driver/mcpwm.h"

#include "delay_.h"

void buzzer_init(void);
void buzzer(int frequency, int time_ms);

#endif