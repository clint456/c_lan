#include <stdio.h>

int main()
{
    void swap(int *p1,int *p2);
    int a,b;
    int *pointer_1,*pointer_2;
    printf("please enter a and b: \n");
    scanf("%d,%d",&a,&b);
    pointer_1 = &a;
    pointer_2 = &b;
    if(a<b) swap1(pointer_1,pointer_2);
    printf("max = %d, min = %d \n",a,b); 
    return 0;
}

void swap(int *p1, int *p2)
{
    int temp = *p1; 
    *p1 = *p2;
    *p2 = temp;
}
//值传递不能改变变量的值
void swap1(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
