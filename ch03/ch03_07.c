// chapter 03 3.7 showf_pt.c
// showf_pt.c -- 以两种方式显示 float 类型的值

// VS Code默认使用了系统crt的printf函数,增加下一行宏定义修改设定
 #define __USE_MINGW_ANSI_STDIO 1 
// 做上述修改后，long double 记数显示成功，但是p记数方法会出错 
 #include <stdio.h>

 int main(void)
 {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n",aboat,aboat);
//  编译器支持 p记数 
    printf("And it's %a in hexadecmial, powers of 2 notation\n",aboat);
    printf("%f can be eritten %e\n",abet,abet);
    printf("%Lf can be written %Le\n",dip,dip);

    return 0;
 } 
