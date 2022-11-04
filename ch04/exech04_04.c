// Exercise Chapter 04 04
#include <stdio.h>

#define LEN 20
#define INCH_PER_FEET 12.0

int main(void)
{
    float heigth;
     char name[LEN];

    printf("Please enter your name: ");
    scanf("%19s",name); 
    printf("then, enter your heigth(in inch): ");
    scanf("%f",&heigth);
    printf("%s, you are %.3f feet tall.\n",name,heigth/INCH_PER_FEET);

    return 0;
}