// Character 05 5.3 golf.c
// golf.c -- 高尔夫锦标赛积分卡
#include <stdio.h>

#define ADJUST 7.31

int main(void)
{
    int jane,tarzan,cheeta;

    cheeta = tarzan = jane = 68;
    printf("                  cheeta   tarzan    jane\n");
    printf("First round score %4d %8d %8d\n",cheeta,tarzan,jane);
    
    return 0;
}