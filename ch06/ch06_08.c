// Character 06 6.8 trouble.c
// trouble.c -- 误用=会导致无限循环
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld",&num);

// while (1 == status)
    while(status = 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld",&num);     
    }
    printf("Those integers sum to %ld.\n",sum);

    return 0;
}