// Chapter 04 4.13 prntval.c
// prntval.c -- printf() 函数的返回值
 #include <stdio.h>

 int main(void)
 {
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's bolling point.\n",bph2o);
    printf("The printf() function printed %d characters.\n",rv);

    return 0;
 } 
