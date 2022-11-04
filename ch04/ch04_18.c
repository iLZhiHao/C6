// Chapter 04 复习题
// 参考 《C Primer Plus》第6版 第4章 复习题

#include <stdio.h>
#include <string.h>

#define Q "His Hamlet was funny without being vulgar."
#define B "booboo"
#define X 10
#define BOOK "War and Peace"

int main(void)
{
 /*     第2题            */   
 /*   printf(" $%2.2f \n",2.345e2);
    printf("%c%c%c\n",'H', 105,'\41');
    printf("%s\nhas %d characters.\n",Q,strlen(Q));
    printf("Is %2.2e the same as %2.2f?\n",1201.0,1201.0);  */
//      第3题            
/*    printf("\"Q\" is %s\nand it has %d characters.\n",Q,strlen(Q));  */
//      第4题           
/*      int age,xp;
    char name[30];
    printf("Please entryour first name: ");
    scanf("%s",name);
    printf("All right, %s, what's your age?\n",name);
    scanf("%d",&age);
    xp = age + X;
    printf("That's a %s! You must be at least %d.\n",B,xp);  */
//      第5题
/*    float cost = 12.99;
    float percent = 80.0;

    printf("This copy of \"%s\" sells for $%.2f.\n",BOOK,cost);
    printf("That is %.0f%% of list.\n",percent);  */
//      第6题
/*     printf("**%d**\n",1280);
    printf("**%4x**\n",0x8A);
    printf("**%10.3f**\n",232.346);
    printf("**%12.2e**\n",2.33e2);
    printf("**%-30s**","abcde");  */
//     第7题
/*    unsigned long uL_num7 = 1223987001;
      int i_num7 = 0x8a;
    float f_num7 = 2.33e2;
    float f_num7_2 = +232.346;
     char ch_arry7[20] = "Zhihao__LIU";

    printf("**%15lu**\n",uL_num7);
    printf("**%4x**\n",i_num7);
    printf("**%12e**\n",f_num7);
    printf("**%+10f**\n",f_num7_2);
    printf("**%8.8s**\n",ch_arry7);  */
//     第8题
/*      int i_num8 = 0x8a;
      int i_num8_2 = 25;
     char ch_C = 'S';
     float f_num8 = 3.13;
     char ch_arry8[20] = "Zhihao__LIU";

    printf("**%6.4d**\n",i_num8);
    printf("**%*o**\n",5,i_num8_2);
    printf("**%2c**\n",ch_C);
    printf("**%+0.2f**\n",f_num8);
    printf("**%-7.5s**\n",ch_arry8);  */
//     第9题
/*      int i_num9;
    float f_num9_1,f_num9_2;
     char ch_arry9[15];
     char ch_arry9_2[15];
      int i_num9_2;

    printf("Enter a int number: ");
    scanf("%d",&i_num9);
    printf("Int number is %d.\n",i_num9);

    printf("Enter two float numbers: ");
    scanf("%f %f",&f_num9_1,&f_num9_2);
    printf("Float number are %.2f, %.2E.\n",f_num9_1,f_num9_2);

    printf("Enter a string: ");
    scanf("%s",ch_arry9);
    printf("String arry is \"%s\". \n",ch_arry9);

    printf("Enter a string and a int number: ");
    scanf("%s %d",ch_arry9_2,&i_num9_2);
    printf("String arry is \"%s\", and int number is %d. \n",ch_arry9_2,i_num9_2);

    printf("Enter a string and a int number: ");
    scanf("%*s %d",ch_arry9_2,&i_num9_2);
    printf("String arry is \"%s\", and int number is %d. \n",ch_arry9_2,i_num9_2);  */
//     第11题
/*    printf("The double type is %zx bytes..\n",sizeof(double));  */





    return 0;
}