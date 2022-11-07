// Exercise Character 05_08
// 
#include <stdio.h>

void module(int num_first,int num_second);

int main(void)
{
    int num_first;
    int num_second;
    int mod_num;

    printf("This program computes moduli.\n");
    printf("Enter an integer to save as the second operad: ");
    scanf("%d",&num_second);
    printf("Now,enter the first operad: ");
    scanf("%d",&num_first);

    while(num_first)
    {
        module(num_first,num_second);
        printf("Enter the next number for first operatd(<= 0 to quit): ");
        scanf("%d",&num_first);
    }
    printf("Done\n");

    return 0;
}

void module(int num_first,int num_second)
{
    printf("%d %% %d is %d. \n",num_first,num_second,num_first % num_second);
}