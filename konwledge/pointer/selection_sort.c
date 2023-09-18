#include <stdio.h>
#include <string.h>
#define N 13

int main(int argc, char const *argv[])
{
    void sort(char *name[],int n);
    void sort_2(char *name[],int n);
    void print(char *name[],int n);
    void print_2(char *name[],int n);

    char *name[] ={"4PGC938", "2IYE230", "3CIO720", "1ICK750", "1OHV845", "4JZY524", "1ICK750", "3CIO720","1OHV845", "1OHV845","2RLA629", "2RLA629", "3ATW723"};

    sort(name,N);
    print_2(name,N);

    return 0;
}

//没有k的情况
void sort(char *name[],int n) //使用选择排序
{
    int count = 0;
    char *temp;
    int i,j,k;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(strcmp(name[i],name[j])>0) 
/*如果返回值小于 0，则表示 str1 小于 str2。
如果返回值大于 0，则表示 str1 大于 str2。
如果返回值等于 0，则表示 str1 等于 str2。*/
                {
                    temp = name[i];
                    name[i] = name[j];
                    name[j] = temp;
                    count++;
                }
        }
    }
    printf("sort without k swap count: %d\n",count);
}

//有k的情况
void sort_2(char *name[],int n) //使用选择排序
{
    int count = 0;
    char *temp;
    int i,j,k;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            k=i;
            if(strcmp(name[i],name[j])>0) 
/*如果返回值小于 0，则表示 str1 小于 str2。
如果返回值大于 0，则表示 str1 大于 str2。
如果返回值等于 0，则表示 str1 等于 str2。*/
                {
                    k=j;
                }
            if(k!=i)
            {
                    temp = name[i];
                    name[i] = name[j];
                    name[j] = temp;
                    count++;
            }
        }
    }
    printf("sort with k swap count: %d\n",count);
}


void print(char *name[],int n)
{
    int i;
    for(i=0;i<N;i++) printf("%s\n",name[i]);
}

