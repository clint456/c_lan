#include <stdio.h>

int main(int argc, char const *argv[])
{ 
    char a[] = "abcdefg"; //字符数组
    char b[14] = "abcdefg";//字符数组
    char *c = "house"; //字符串常量



    //经典错误：
    //a = "adags";
    //b[] = "aggadsga"; 
    

    //注意字符数组仅仅可以在定义！时可以整体赋值
    //之后不能使用赋值语句对全部元素进行赋值

    printf("%s\n%s\n",a,b);

    //经典错误：
    //*(c+1) = 'r';
    //c[1] = 'r';
    //字符指针变量指向的字符串常量中的内容是不可以被取代的
    //即不能被赋值

    printf("%s\n",c);

    
    char *d  = a;//本质上也是字符数组，是变量
    *(d+1) = '0';  //合法
    printf("%s\n",d);

    //用指针变量指向一个格式字符串，可以用其代替printf中的格式字符串
    int m = 1;
    float n=2.5;

    char *format_1; //字符指针
    format_1 = "m=%d,n=%f\n";

    char format_2[] = "m=%d,n=%f\n";//字符数组

    //经典错误，数组要定义大小
    //char format_3[];
    //format_3 =  "m=%d,n=%f\n"; 

    printf(format_1,m,n);
    printf(format_2,m,n);

    



    return 0;
}
