#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{   
    char *str[50];
    gets(str);
    puts(str);


    char a;
    a = getc(stdin);
    putc(a,stdout);
    return 0;
}
