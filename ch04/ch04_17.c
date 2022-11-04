// Chapter 04 4.17 skip2.c
// skip2.c -- 跳过输入中的前两个整数
 #include <stdio.h>

 int main(void)
 {
    int n;

    printf("Enter three integers: \n");
    scanf("%*d %*d %d",&n);
    printf("The last integer was : %d:\n",n);

    return 0;
 } 
