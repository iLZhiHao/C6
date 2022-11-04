// Exercise Chapter 04 03
#include <stdio.h>

int main(void)
{
    float f_number;

    printf("Enter a float number: ");
    scanf("%f",&f_number);
    printf("Thn float number is: %.1f or %.3e. \n",f_number,f_number);

    return 0;
}