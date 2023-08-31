/*宏定义define*/
#include <stdio.h>

#define f(x) ((x)*(x))
#define l(x) x*x
int main(int argc, char const *argv[])
{
    /* code */
    printf("f: %d\n",f(3));
    printf("l: %d\n",l(3));

    printf("f(2+1): %d\n",f(3+1));
    // (2+1)*(2+1) ==> 9
    printf("l(2+1): %d\n",l(3+1));
    // 2+1*2+1 ===> 5



    return 0;
}
