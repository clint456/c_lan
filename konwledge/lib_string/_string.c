#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    // char *p1,*p2,str[50] = "abc";
    // p1 = "abc",p2="abc";
    // strcpy(str,strcat(p1,p2));
    // printf("%s\n",str);
    // return 0;

    char str[50]="abc"; //定义足够大的空间来存放copy后的字符串。
    char p1[10]="abc"; //p原来是指针，不能用来连接其他字符串。
    char *p2="abc";
    //strcat(p1,p2)字符串连接，将p1,p2连接起来并存储在p1中。
    //p1要能存放字符串，不能使用没有空间的指针。(即没有初始化并new空间的指针）
    //strcpy(str+1,strcat(p1,p2))，将连接后的字符串copy到字符数组str中，存储位置在
    //str的第二个字符开始。
    strcpy(str+1,strcat(p1,p2));
    printf("%s\n",str);
}
