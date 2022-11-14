// Character 06 6.3 while1.c
// while1.c -- 注意花括号的使用
/* 糟糕的代码，创造了一个无限循环 */
#include <stdio.h>

int main(void)
{
    int n = 0 ;
    
    while(n < 3)
        printf("n = %d\n",n);
        n++;
    printf("That's all this program does.\n\n");

    return 0;
}