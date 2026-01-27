#include<stdio.h>
#include<unistd.h>//sleep

typedef enum {
        LED_OFF,
        LED_ON,
        LED_BLINK
    }led_state_t;


void led_off(void)
{
    printf("led_off\n");
}

void led_on(void)
{
    printf("led_on\n");
}

void led_blink(void)
{
    printf("led_blink\n");
    sleep(1);
}

int main(void)
{
    led_state_t curr_state = LED_OFF;
    while(1)
    {   
        switch (curr_state){
            
            case 0:
                led_off();
                curr_state = LED_ON;
                break;

            case 1:
                led_on();
                curr_state = LED_BLINK;
                break;

            case 2: 
                led_blink();
                curr_state = LED_OFF;
                break;

            default: 
                curr_state = LED_OFF;
                break;
        }
     }
    return 0;
}
