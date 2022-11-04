// Chapter 04 4.4 pizza.c
// pizza.c -- 在披萨饼程序中使用已定义的常量
 #include <stdio.h>

 #define  PI 3.14149

 int main(void)
 {
    float area,circum,radius;

    printf("What's the radius of your pizza? \n");
    scanf("%f",&radius);
    area = PI * radius * radius;
    circum = 2 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f \n",circum,area);

    return 0;
 } 
