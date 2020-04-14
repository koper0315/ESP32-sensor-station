#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "config.h"
#include "delay_.h"
#include "buzzer_.h"


void app_main()
{
    buzzer_init();
    int i=0;
    while (1) //main loop
    {
        printf("test%d\n", i);
        delay_ms(1000);
        i++;
    }
}
