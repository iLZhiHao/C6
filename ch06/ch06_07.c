// Character 06 6.7 truth.c
// truth.c -- 哪些为真
#include <stdio.h>

int main(void)
{
    int n = 3;

    while(n)
        printf("%2d is true,\n",n--);
    printf("%2d is false. \n",n);

    n = -3;
    while (n)
        printf("%2d is true,\n",n++);
    printf("%2d is false, \n",n);

    return 0;
}