#include "mbed.h"
#include "BME280.h"

BME280 sensor(PB_9, PB_8);
DigitalOut oled1(LED1);

//(USBTX, USBRX);

int main() {
printf("Hello\n");

while(1) {
printf("%d degC, %d hPa, %d %%\n",
(int)sensor.getTemperature(),
(int)sensor.getPressure(),
(int)sensor.getHumidity());
wait_us(500000 );

if ((int)sensor.getTemperature() > 26)
{
oled1 = 1;
}
else
{
oled1 = 0;
}

}
}