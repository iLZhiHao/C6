// Character 05 5.8 sizeof.c
// sizeof.c -- 使用 sizeof 运算符
// 使用C99新增的%zd转换说明--如果编译器不支持%zd，将其改为%u或者%lu
#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
            n,sizeof n,intsize);
    
    return 0;
}