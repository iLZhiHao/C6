// Chapter 04 4.10 stringf.c
// stringf.c -- 演示一些格式标记
 #include <stdio.h>

 #define BLURB "Authentic imitaion!"

 int main(void)
 {
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);

    return 0;
 } 
 
