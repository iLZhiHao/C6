// Exercise Character 05_07
// 
#include <stdio.h>

void cubic(double num);

int main(void)
{
    double db_num;

    printf("Enter a double number: \n");
    scanf("%lf",&db_num);
    cubic(db_num);
    printf("Done!");

    return 0;
}

void cubic(double num)
{
    double cub_num;
    cub_num = num * num * num;
    printf("The cubic of %.1f is %.2f. \n",num,cub_num);
}