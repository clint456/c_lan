#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a[100] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[0]; //初始化
    //int *p = a

    //1.p++
    p++;
    printf("p++: %d\n",*p);
    // == 》 2

    p = a;
    //2. *p++  == *(p++)  
    //*和++优先级级相同，自右向左运算
    printf("*p++: %d\n",*p++);
    printf("*p: %d\n",*p);
    p = a;
    printf("*++p:%d\n",*(++p));
    //注意：++p 和 p++ 的区别

    p=a;
    //3.*(p++) and *(p++) 
    //这里注意自增自减符的特性即可

    //4.++(*p)
    p++; 
    printf("*p: %d\n",*p);
    printf("++(*p):%d\n",++(*p));
    //这里注意是将数组中的值自增，而不是p移动到下一个数组元素

    //5. *(++p) == a[i++]     *(p--) == a[i--]     *(--p) == a[--i]
    //p先自增或自减运算，在进行取值*运算

    p = a;
    //输出数组的100个元素
    //方法一
    printf("输出数组的100个元素【方法一】:\n");
    while (p<a+100)
    {
        printf("%d",*p++);
    }
    printf("\n");


    p=a;
    //方法二
    printf("输出数组的100个元素【方法二】：\n");
    while(p<a+100)
    {
        printf("%d",*p);
        p++;
    }
    printf("\n");

    return 0;
}
