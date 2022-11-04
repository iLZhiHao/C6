// Exercise chapter 03-06
// 计算任意夸脱水中包含的水分子数
 #include <stdio.h>
 #define MASS_PER_MOLE 3.0e-23
 #define MASS_PER_QUART 950

 int main(void)
 {
    double quart,molecules;

    printf("Enter the quart of water: ");
    scanf("%lf",&quart);

    //molecules = quart * 950 /3e-23;
    molecules = quart * MASS_PER_QUART / MASS_PER_MOLE;
    printf("%.3lf quart water includes %e water molecules.",quart,molecules);

    return 0;
 } 
