// Exercise Character 05_06
// 
#include <stdio.h>

#define MAX 100

int main(void)
{
    int i_days;
    int count,sum,squ_count;

    count = 0;
    sum = 0;

    printf("Enter a number of days: \n");
    scanf("%d",&i_days);

    while(count++ < i_days)
    {
        squ_count = count * count;
        sum = sum + squ_count;  
    }
    printf("sum = %d \n",sum);

    return 0;
}