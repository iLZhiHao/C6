// Character 06 6.10 sweetie1.c
// sweetie1.c -- 一个记数循环
#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count = 1;

    while(count <= NUMBER)
    {
        printf("Be my Valentine!\n");
        count++;
    }

    return 0; 
}