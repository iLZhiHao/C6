// Chapter 04 4.10-11 学以致用
// 
 #include <stdio.h>

 #define BLURB "Authentic imitaion!"

 int main(void)
 {
    char name[40];
    float cash;

    printf("Enter one name: ");
    scanf("%s",name);
    printf("Hello, %s.\n",name);
    cash = 1.11;

    printf("The %s family just may be $%.2f richer! \n",name,cash);

    return 0;
 } 
 
