// Exercise Character 05_09
// 
#include <stdio.h>

void Temperatures(double db_T_F);

int main(void)
{
    double db_T_F;
    int quit_flag;

    printf("This program computes moduli.\n");
    printf("Enter an integer to save as the second operad: ");
    quit_flag = scanf("%lf",&db_T_F);

    while(quit_flag == 1)
    {
        Temperatures(db_T_F);
        printf("Enter the next number for first operatd(<= 0 to quit): ");
        quit_flag = scanf("%lf",&db_T_F);
    }
    printf("Done\n");

    return 0;
}

void Temperatures(double db_T_F)
{
    const float F_TO_C = 1;
    const float C_TO_K = 2;
    double db_T_C,db_T_K;

    /* [ TODO ] */
    //printf("%d %% %d is %d. \n",num_first,num_second,num_first % num_second);
}