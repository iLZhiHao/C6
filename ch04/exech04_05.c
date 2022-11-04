// Exercise Chapter 04 05
#include <stdio.h>

#define BITS_PER_BYTE 8

int main(void)
{
    float down_speed;
    float file_size;
    float total_time;

    printf("Please enter the download speed in Mb/s: ");
    scanf("%f",&down_speed); 
    printf("then, enter the file size in MB: ");
    scanf("%f",&file_size);
    total_time = file_size * BITS_PER_BYTE/ down_speed;
    printf("At %.2f megabits per second, a file of %.2f megabtes\n"
           "downloads in %.2f seconds. \n",down_speed,file_size,total_time);
    

    return 0;
}

