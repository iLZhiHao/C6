// Exercise Character 05_04
// 
#include <stdio.h>

const float CM_PER_INCH = 2.54;             // 3.54 cm/inch
const float INCH_PER_CM = 0.3937;
const float CM_PER_FEET = 30.84;
const int INCH_PER_FEET = 12;

int main(void)
{
    float fl_heigth_cm;
    int in_heigth_feet;
    float fl_heigth_inch;

    printf("Enter a heigth in centimeters: ");
    scanf("%f",&fl_heigth_cm);
    
    while(fl_heigth_cm > 0)
    {
        in_heigth_feet = fl_heigth_cm / CM_PER_FEET;
        fl_heigth_inch = fl_heigth_cm * INCH_PER_CM - in_heigth_feet * INCH_PER_FEET;
        printf("%.1f cm = %d feet , %.1f inches. \n",fl_heigth_cm,in_heigth_feet,fl_heigth_inch);
        printf("Enter a heigth in centimeters (<=0 to quit): ");
        scanf("%f",&fl_heigth_cm);
    }

    printf("bye!\n");

    return 0;
}