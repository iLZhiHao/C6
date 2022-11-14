// Character 06 6.15 do_while.c
// do_while.c -- 出口条件循环
#include <stdio.h>

int main(void)
{
    const int SECRET_CODE = 13;
    int code_entered;

    do
    {
        printf("To enter the triskaidekaphobia therapy club.\n");
        printf("plwase enter the secret code number: ");
        scanf("%d",&code_entered);
    } while (code_entered != SECRET_CODE);
    printf("Congratulations! You are cured!\n");

    return 0; 
}