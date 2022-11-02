// chapter 03 3.1 platinum.c
/* platinum.c -- your weight in platinum*/
#include <stdio.h>

int main(void)
{
    float weigth;
    float value;

    printf("Are you worth your weigth in platinum?\n");
    printf("Let;s check it out.\n");
    printf("Please enter your weigth in pounds:");

    scanf("%f",&weigth);

    value = 1700.0 * weigth * 14.5833;
    printf("Your weigth in platinum is worth $%.2f.\n",value); 
    printf("You are easily worth that! If platinum prices drop,");
    printf("eat more to maintain your value.\n");


    return 0;
}