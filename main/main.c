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

//#include "bme280.h"
#include "bme_controller.h"
#include "sa_14.h"

// void bme_controller_init()
// {
//     bme280_config_t bme0 = {
//             .sda_pin = bme_sda_pin,
//             .scl_pin = bme_scl_pin,
//             .i2c_instance = I2C_NUM_1
//     };
//     bme280_setup(&bme0);
// }

// void bme_controller_task()
// {
//     bme280_measurement_t reading;
//     bme280_make_measurement(&bme0, &reading);
//     bme280_print_measurement(&reading);
// }

void app_main()
{
    //buzzer_init();
    //co2_init();
    //dust_gpio_init();
    //bme_controller_init();
    //xTaskCreate(dust_measuring, "dust_measuring", 1024*2, NULL, configMAX_PRIORITIES, NULL);
    //xTaskCreate(rx_task, "uart_rx_task", 1024*2, NULL, configMAX_PRIORITIES, NULL);
    //xTaskCreate(tx_task, "uart_tx_task", 1024*2, NULL, configMAX_PRIORITIES-1, NULL);
    //xTaskCreate(jsonCreateTask,"jsonCreateTask",1024*2, NULL, configMAX_PRIORITIES,NULL);
    //xTaskCreate(bme_controller_task, "bme_controller_task", 1024*2, NULL, configMAX_PRIORITIES-1, NULL);
    xTaskCreate(sa_controller_task, "sa_controller_task", 1024*2, NULL, configMAX_PRIORITIES-1, NULL);
    while (1)
    {
        //printf("Dust density: %5.2fug/m3, co2: %dppm, temp: %dC°\n",public_dust_density,public_co2_concentration, public_temperature);*/
        //printf("temperature: %.1f *C, Pressure:    %.0f hPa, Humidity:    %.0f %%\n", public_temp, public_pressure, public_humidity);
        printf("sa raw: %d, saV: %dmV\n",public_sa_14_raw, public_sa_14_mv);
        delay_ms(5000);
    }
    
    
}
