#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD1(LED1);   //Leds conectados a puerto A LD1 es PA5

    while (true) {
        LD1 = B1_USER;
    }
}
