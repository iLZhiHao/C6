// Exercise Chapter 04 06
#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void)
{
    char first_name[LEN],last_name[LEN];
     int length_first,length_last; 

    printf("Enter your first name: ");
    scanf("%19s",first_name);
    printf("Enter your last name: ");
    scanf("%19s",last_name);
    length_first = strlen(first_name);
    length_last = strlen(last_name);

    printf("%s %s\n",first_name,last_name);
    printf("%*d %*d\n",length_first,length_first,length_last,length_last);

    printf("%s %s\n",first_name,last_name);
    printf("%-*d %-*d\n",length_first,length_first,length_last,length_last);

    return 0;
}

