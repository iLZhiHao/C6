// Exercise chapter 03-04
// 三种方式打印小数
 #include <stdio.h>

 int main(void)
 {
    float num;

    printf("Enter a floating-point value: ");
    scanf("%f",&num);
    printf("fixed-point notation: %f \n",num);
    printf("exponential notation: %e \n",num);
    printf("p notation: %a \n",num);

    return 0;
 } 
