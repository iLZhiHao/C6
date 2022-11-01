// Exercise chapter 02_06
#include <stdio.h>

int main(void)
{
    int toes;
    int toes_10;
    int toes_squa;

    toes = 10;
    toes_10 = 10 * toes;
    toes_squa = toes * toes;
    printf("toes = %d, 10 times toes = %d, Square toes = %d.\n",toes,toes_10,toes_squa);

    return 0;
}