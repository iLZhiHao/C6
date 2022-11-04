// Exercise chapter 03-07
// 身高单位 英寸 转 厘米
 #include <stdio.h>
 #define CM_PER_INCH 2.54

 int main(void)
 {
    float stature_cm,stature_inch;

    printf("Enter the stature in inch: ");
    scanf("%f",&stature_inch);

    //molecules = quart * 950 /3e-23;
    stature_cm = stature_inch * CM_PER_INCH;
    printf("Your stature is %.2f cm.\n",stature_cm);

    return 0;
 } 
