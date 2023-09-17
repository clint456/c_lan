/*函数指针*/
#include <stdio.h>
int add(int x,int y)
{
    printf("%d,%d\n",x,y);
    return (x+y);
}

int main(int argc, char const *argv[])
{
    /* code */
    int (*f)(int,int);
    f = add;
    //调用方式1
    add(2,3);
    //调用方式2
    f(4,5);
    //调用方式3
    (*f)(7,9);

    return 0;
}
