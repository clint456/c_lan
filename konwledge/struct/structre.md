## 结构体

### 结构的模型：

- ```c
  struct 结构体名
  {
      //[成员列表(member list)/域表(field list)]
      类型名1 成员名1;
      类型名2 成员名3;
          
  }
  ```

  - 成员可以是其他结构体

### 定义结构体

- 1. 先声明结构体类型，在定义该类型的变量

     ```c
     //声明结构体类型
     struct Student
     {
      int num;
      char name[20];
      char sex;
      int age;
      //struct Date birthday;
      chat addr[30];
     }
     struct Student student1,student2;
     ```
    - Tips:
      - 许多计算机以4个字节为一个“字”，所以，如果在一个“字”中只存放了一个字节，但是该“字”剩下的3个字节不会被占用，而是跳过他们，去到下一个“字”开始存放。
      - 所以这里sizeof(student1)的结果是64，而不是63
      - 这种定义方式的好处：将`声明类型`和`定义变量`分离开来，可以随时修改
  
- 2.在声明类型的同时定义变量

  - ```c
    struct Student
    {
        int num;
        char name[20];
        char sex;
        int age;
    }student1,student2;
    ```

- 3.不指定类型名而直接定义结构体类型变量

  - ```c
    struct
    {
        int num;
        int num;
        char sex;
        int age;
        /* data */
    }student1,student2;
    ```

  

- Tips:
  - 结构体类型与结构体变量：
    - 类型：定义结构体时用的，不会分配内存；
    - 变量：实例化后的结构体，对其分配对应的空间大小；
  - 结构体的成员名可以和程序中的变量名相同

### 结构体变量的初始化和引用

### 如何使用结构体

### 结构体指针

### 用指针处理链表

### 共用体类型

### 枚举类型

### typedef声明新类型名