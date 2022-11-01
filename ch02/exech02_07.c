// Exercise chapter 02_07
#include <stdio.h>
void smilefun(void);

int main(void)
{
    smilefun();
    smilefun();
    smilefun();
    printf("\n");

    smilefun();
    smilefun();
    printf("\n");

    smilefun();
    printf("\n");
    
    return 0;
}

void smilefun(void)
{
    printf("Smile!");
}