// Character 06 6.11 sweetie2.c
// sweetie2.c -- 使用for循环的记数循环
#include <stdio.h>

int main(void)
{
    const int NUMBER = 22;
    int count;

    for(count = 1; count <= NUMBER; count++)
        printf("Be my Valentine!\n");

    return 0; 
}