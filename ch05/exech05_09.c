// Exercise Character 05_09
// 
#include <stdio.h>

void Temperatures(double db_T_F);

int main(void)
{
    double db_T_F;
    int quit_flag;

    printf("Enter temperature number in fahrenheit: ");
    quit_flag = scanf("%lf",&db_T_F);

    while(quit_flag == 1)
    {
        Temperatures(db_T_F);
        printf("Enter the next temperature number in fahrenheit(nonnumeric character to quit): ");
        quit_flag = scanf("%lf",&db_T_F);
    }
    printf("Bye.\n");

    return 0;
}

void Temperatures(double db_T_F)
{
    const float F_TO_C_k = 5.0/9.0, T_TO_C_b = 32.0;
    const float C_TO_K_b = 237.16;
    double db_T_C,db_T_K;

    db_T_C = F_TO_C_k * (db_T_F - T_TO_C_b);
    db_T_K = db_T_C + C_TO_K_b;

    printf("%.2f F = %.2f C = %.2f K. \n",db_T_F,db_T_C,db_T_K);

}