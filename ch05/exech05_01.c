// Exercise Character 05_01
// 
#include <stdio.h>

const int S_PER_M = 60;             // 1 分钟的秒数
const int M_PER_H = 60;             // 1 小时的分钟数
const int S_PER_H = 3600;           // 1 小时的秒数

int main(void)
{
    int time;
    int hour,min;

    printf("Concert minutes to hour and minutes.\n");
    printf("Now,enter the times in minutes: \n");
    scanf("%d",&time);
    
    while(time > 0)
    {
        hour = time / M_PER_H;
        min = time % M_PER_H;
        printf("%d minute(s) is %d huor(s), %d minute(s). \n",time,hour,min);
        printf("Enter next times in minutes (<=0 to quit): \n");
        scanf("%d",&time);
    }

    printf("Done!\n");

    return 0;
}