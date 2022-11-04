// Exercise chapter 03-05
// 年龄 转换为 秒
 #include <stdio.h>

 int main(void)
 {
    int age;
        
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Your age is %d ",age);
    printf("the seconds are %e \n",age * 3.156e7);

    return 0;
 } 
