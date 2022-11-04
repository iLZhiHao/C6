// Exercise Chapter 04 08
#include <stdio.h>

#define LITRE_PER_GALLON 3.785f
#define KILOMETER_PER_MILE 1.609f

int main(void)
{
    float distance,gas;

    printf("Input the distance you travelled(in miles): ");
    scanf("%f",&distance);
    printf("Input the gas you spend(in gallon): ");
    scanf("%f",&gas);

    printf("Fuel cosumptions:\n");
    printf("USA: your gas wear is %.1f mile/gallon\n",distance / gas);
    printf("Europe: your gas wear is %.1f liter/100km\n",gas * LITRE_PER_GALLON / (distance * 100 * KILOMETER_PER_MILE));

    return 0;
}