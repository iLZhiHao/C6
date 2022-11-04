// Exercise chapter 03-08
// 身高单位 英寸 转 厘米
 #include <stdio.h>
 #define CUP_PER_PINt 2
 #define OUNCE_PER_CUP 8
 #define BIGSPOON_PER_OUNCE 2
 #define TEASPOON_PER_BIGSPOON 3

 int main(void)
 {
    float cup;
    float pint, ounce, bigspoon, teaspoon;

    printf("Enter the number of cup: ");
    scanf("%f",&cup);

    //molecules = quart * 950 /3e-23;
    pint = cup / CUP_PER_PINt;
    ounce = cup * OUNCE_PER_CUP;
    bigspoon = ounce * BIGSPOON_PER_OUNCE;
    teaspoon = bigspoon * TEASPOON_PER_BIGSPOON;
    printf("%.2f cup(s) = %.2f pint(s) = %.2f ounce = %.2f ladle(s) = %.2f tea.\n",cup,pint,ounce,bigspoon,teaspoon);

    return 0;
 } 
