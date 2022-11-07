// Character 05 5.10 add_one.c
// add_one.c -- 递增：前缀和后缀
#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;

    while(super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, utral = %d \n",super,ultra);
    }
    printf("Done! \n");
    
    return 0;
}