// Exercise Chapter 04 02
#include <stdio.h>
#include <string.h>

#define ARRY_MAX 20

int main(void)
{
    char first_name[ARRY_MAX],last_name[ARRY_MAX];
     int length_first,length_last; 

    printf("Enter your first name: ");
    scanf("%19s",first_name);
    printf("Enter your last name: ");
    scanf("%19s",last_name);
    length_first = strlen(first_name);
    length_last = strlen(last_name);

    printf("a. \"%s,%s\".\n",first_name,last_name);       // a
    printf("b. \"%20s,%20s\".\n",first_name,last_name);   // b
    printf("c. \"%-20s,%-20s\".\n",first_name,last_name); // c
    printf("d. \"%*s,%*s\".\n",
            length_first+3,first_name,length_last+3,last_name);   // d

    return 0;
}
