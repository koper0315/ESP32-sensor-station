#include "delay_.h"

void delay_ms(int ms)
{
	vTaskDelay(ms / portTICK_RATE_MS);
}