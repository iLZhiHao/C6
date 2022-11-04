// Exercise Chapter 04 07
#include <stdio.h>
#include <float.h>


int main(void)
{
    double dbl_num;
     float flt_num;

    dbl_num = 1.0/3.0;
    flt_num = 1.0/3.0;

    printf("FLT_DIG = %d, DBL_DIG = %d. \n",FLT_DIG,DBL_DIG);
    printf("a. 1.0/3.0 double result is %.6f, and float result is %.6f.\n",dbl_num,flt_num);
    printf("b. 1.0/3.0 double result is %.12f, and float result is %.12f.\n",dbl_num,flt_num);
    printf("c. 1.0/3.0 double result is %.16f, and float result is %.16f.\n",dbl_num,flt_num);

    return 0;
}