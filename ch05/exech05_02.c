// Exercise Character 05_02
// 
#include <stdio.h>

#define NUMBER 10

int main(void)
{
    int i_num,i_num_ten;

    printf("Enter a integer number\n");
    scanf("%d",&i_num);
    i_num_ten = i_num + NUMBER;
    while(i_num <= i_num_ten)
    {
        printf("%d ",i_num);
        i_num++;
    }

    printf("\nDone!\n");

    return 0;
}