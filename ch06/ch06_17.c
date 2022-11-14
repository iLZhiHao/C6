// Character 06 6.17 rows1.c
// rows1.c -- 使用嵌套循环
#include <stdio.h>

#define ROWS 6
#define CHARS 10

int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)
            printf("%c",ch);
        printf("\n");
    }
    printf("Done!\n");
    

    return 0; 
}
