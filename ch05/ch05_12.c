// Character 05 5.12 bottles.c
// bottles.c -- 
#include <stdio.h>

#define MAX 100

int main(void)
{
    int count = MAX + 1;

    while(--count > 0)
    {
        printf("%d bottles of spring water on the wall, "
                "%d bottles oof spring water! \n",count,count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring of water!\n\n",count - 1);
    }

    return 0;
}