// Chapter 04 4.16 varwid.c
// varwid.c -- 使用变宽输出字段
 #include <stdio.h>

 int main(void)
 {
    unsigned width,precision;
    int number = 256;
    double weigth = 242.5;

    printf("Enter a filed width: \n");
    scanf("%d",&width);
    printf("The number is: %*d:\n",width,number);

    printf("Now enter a width and a precision: \n");
    scanf("%d %d",&width,&precision);
    printf("Weigth = %*.*f\n",width,precision,weigth);
    printf("Done! \n");
    
    return 0;
 } 
