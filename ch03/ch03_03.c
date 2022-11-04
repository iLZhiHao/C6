// chapter 03 3.3 bases.c
// bases.c -- 以十进制、八进制、十六进制打印十进制数100
 #include <stdio.h>

 int main(void)
 {
    int num = 100;

    printf("dec = %d; cotal = %o; hex = %x.\n",num,num,num);
    printf("dec = %d; cotal = %#o; hex = %#x.\n",num,num,num);

    return 0;
 } 