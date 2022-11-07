// Character 05 5.11 post_pre.c
// post_pre.c -- 递增：前缀和后缀
#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post,pre_b;

    a_post = a++;
    pre_b = ++b;

    printf("a   a_post  b   pre_b \n");
    printf("%1d %5d %5d %5d",a,a_post,b,pre_b);
    
    return 0;
}