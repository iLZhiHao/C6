// Exercise Character 05_03
// 
#include <stdio.h>

const int D_PER_W = 7;             // 1 周的天数
const int D_PER_M = 30;             // 1 个月的天数

int main(void)
{
    int i_days;
    int weeks,days;

    printf("Convert days to weeks and days.\n");
    printf("Now,enter the numbuer of days(<=0 to quit): \n");
    scanf("%d",&i_days);
    
    while(i_days > 0)
    {
        weeks = i_days / D_PER_W;
        days = i_days % D_PER_W;
        printf("%d day(s) is %d week(s), %d day(s). \n",i_days,weeks,days);
        printf("Enter next the numbuer of days (<=0 to quit): \n");
        scanf("%d",&i_days);
    }

    printf("Done!\n");

    return 0;
}