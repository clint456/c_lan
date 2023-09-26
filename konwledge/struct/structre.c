#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 定义方式1:先声明结构体类型，在定义该类型的变量
    //     struct Date
    // {
    //     int month;
    //     int day;
    //     int year;
    // };

    // struct Student
    // {
    //     int num; //4Byte
    //     char name[20]; //20Byte
    //     char sex; //1Byte
    //     int age; //4BYte
    //     //struct Date birthday; //12Byte
    //     char addr[30]; //30Byte
    // };

    //
    // struct Student student1, student2;

    // 定义方式2：在声明类型的同时定义变量
    // struct Student
    // {
    //     int num;
    //      int num;
    //     char sex;
    //     int age;
    // }student1,student2;

    // 3.不指定类型名而直接定义结构体类型变量
    struct
    {
        int num;
        int num;
        char sex;
        int age;
        /* data */
    }student1,student2;

    printf("%d", sizeof(student1));
    return 0;
}
