// Character 06 6.16 entry.c
// entry.c -- 出口条件循环
#include <stdio.h>

int main(void)
{
    const int SECRET_CODE = 13;
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club.\n");
    printf("plwase enter the secret code number: ");
    scanf("%d",&code_entered);

    while (code_entered != SECRET_CODE)
    {
        printf("To enter the triskaidekaphobia therapy club.\n");
        printf("plwase enter the secret code number: ");
        scanf("%d",&code_entered);
    } 
    printf("Congratulations! You are cured!\n");
    

    return 0; 
}