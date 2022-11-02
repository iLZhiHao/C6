// Exercise chapter 03-02 
// 输入 ASCII码值，打印相应字符
 #include <stdio.h>

 int main(void)
 {
    char char_in;
    
    printf("Please enter a ASCII number: ");
    scanf("%d",&char_in);
    printf("Your enter number %d in character is %c.\n",char_in,char_in);

    return 0;
 } 
