// Exercise Chapter 04 01
#include <stdio.h>

int main(void)
{
    char f_name[20],l_name[20];

    printf("Enter your first name and last name: ");
    scanf("%s %s",f_name,l_name);
    printf("\"%s,%s\".\n",f_name,l_name);

    return 0;
}