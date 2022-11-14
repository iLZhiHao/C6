// Character 06 6.2 when.c
// when.c -- 何时退出循环
#include <stdio.h>

int main(void)
{
    int n = 5;
    
    while(n < 7)
    {
        printf("m = %d\n",n);
        n++;
        printf("Now n = %d\n",n);
    }
    printf("The loop has finished.\n");

    return 0;
}