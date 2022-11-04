// Chapter 04 4.2 praise1.c
// praise1.c -- 使用不同类型的字符串
 #include <stdio.h>
 
 #define  PRAISE "You are an extraordinary being."

 int main(void)
 {
    char name[40];

    printf("Hi! What's your name? ");
    scanf("%s",name);
    printf("Hello, %s. %s\n",name,PRAISE);

    return 0;
 } 
