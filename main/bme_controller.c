#include "bme_controller.h"
#include "config.h"
#include "delay_.h"



void bme_controller_task()
{
   bme280_config_t bme0 = {
            .sda_pin = bme_sda_pin,
            .scl_pin = bme_scl_pin,
            .i2c_instance = I2C_NUM_1
    };
    bme280_setup(&bme0);

    while (1)
    {
       bme280_measurement_t reading;
    bme280_make_measurement(&bme0, &reading);
    bme280_print_measurement(&reading);
    //printf("temperature: %.1f *C, Pressure:    %.0f hPa, Humidity:    %.0f %%\n", public_temp, public_pressure, public_humidity);
    delay_ms(5000);
    }
    

    
}