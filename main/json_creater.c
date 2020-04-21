#include "json_creater.h"
#include "config.h"
#include "delay_.h"
#include "dust_sensor.h"
#include "mhz19b.h"

// void jsonCreateTask(void *pvParameters)
// {
//     while(1)
//     {
//         delay_ms(5000);
//         cJSON *root, *fmt;
//         char *rendered;
//         root = cJSON_CreateObject();
//         cJSON_AddItemToObject(root, "name",cJSON_CreateString("sensors_datas"));
//         cJSON_AddItemToObject(root, "format", fmt=cJSON_CreateObject());
//         //cJSON_AddStringToObject(fmt,"type","rect");
//         cJSON_AddNumberToObject(fmt,"temperature: ", public_temperature);
//         cJSON_AddNumberToObject(fmt,"co2 concentration: ", public_co2_concentration);
//         cJSON_AddNumberToObject(fmt,"temperature: ", public_dust_density);

//         rendered = cJSON_Print(root);
//         printf("json created: %s \n",rendered);
//         cJSON_Delete(root);
//     }
//     printf("End of task \n");
//     vTaskDelete(NULL);
// }

void jsonCreateTask(void *pvParameters)
{
        cJSON *root, *fmt;
        char *rendered;
        root = cJSON_CreateObject();
        cJSON_AddItemToObject(root, "name",cJSON_CreateString("sensors_datas"));
        cJSON_AddItemToObject(root, "format", fmt=cJSON_CreateObject());
        //cJSON_AddStringToObject(fmt,"type","rect");
        cJSON_AddNumberToObject(fmt,"temperature: ", public_temperature);
        cJSON_AddNumberToObject(fmt,"co2 concentration: ", public_co2_concentration);
        cJSON_AddNumberToObject(fmt,"dust density: ", public_dust_density);

        rendered = cJSON_Print(root);
        printf("json created: %s \n",rendered);
        cJSON_Delete(root);
}