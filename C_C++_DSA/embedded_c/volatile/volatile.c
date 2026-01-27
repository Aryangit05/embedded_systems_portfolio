#include <stdio.h>

volatile int flag = 0;

void set_flag(void)
{
    flag = 1;   
}

int main(void)
{
    while (flag == 0)
    {
        
    }

    printf("Flag updated!\n");
    return 0;
}

