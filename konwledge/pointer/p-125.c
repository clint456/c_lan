#include <stdio.h>
#define N 5

int fun(char*s,char a,int n)
{
    int j;
    *s =a;
    j=n;
    while(*s<s[j]) j--;
    return j;
}
int main(int argc, char const *argv[])
{
    char c[N+1];
    int i;
    for(i = 1; i<=N;i++) *(c+1) = 'A'+1+1;
    printf("%d\n",fun(c,'E',N));
    printf("\n");
    return 0;
}
