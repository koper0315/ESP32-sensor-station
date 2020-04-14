#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "config.h"
#include "delay_.h"


void app_main()
{
    int i=0;
    printf("Hello world!\n");
    while (1)
    {
        printf("delay_test%d\n", i);
        delay_ms(1000);
        i++;
    }
}
