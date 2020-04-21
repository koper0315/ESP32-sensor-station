#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "config.h"
#include "delay_.h"
#include "buzzer_.h"
#include "mhz19b.h"
#include "dust_sensor.h"
#include "json_creater.h"


void app_main()
{
    //buzzer_init();
    co2_init();
    dust_gpio_init();
    xTaskCreate(dust_measuring, "dust_measuring", 1024*2, NULL, configMAX_PRIORITIES, NULL);
    xTaskCreate(rx_task, "uart_rx_task", 1024*2, NULL, configMAX_PRIORITIES, NULL);
    xTaskCreate(tx_task, "uart_tx_task", 1024*2, NULL, configMAX_PRIORITIES-1, NULL);
    //xTaskCreate(jsonCreateTask,"jsonCreateTask",1024*2, NULL, configMAX_PRIORITIES,NULL);
    while (1)
    {
        printf("Dust density: %5.2fug/m3, co2: %dppm, temp: %dC°\n",public_dust_density,public_co2_concentration, public_temperature);
        delay_ms(5000);
    }
    // while (1)
    // {
    //     jsonCreateTask();
    //     delay_ms(5000);
    // }
    
    
}
