#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//判断素数
int isPrime(int x)
{
    int ret =1;
    int i;
    if (x==1 || (x%2 == 0 && x!=2)) ret = 0;

    for (i = 3;i<sqrt(x);i+=2){
        if(x % i == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}
//只需要循环到sqrt(x)

int arrayIsPrime(int x,int kownPrimes[],int number0fKnowmPrimes)
{
    int ret = 1;
    int i;
    for( i = 0;i < number0fKnowmPrimes; i++){
        if(x % kownPrimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    const int number = 100;
    int prime[number] = {2};
    int count = 1;
    int i = 3;
    while(count < number) {
        if (arrayIsPrime(i,prime,count))
        {
            prime[count++] = i;
        }
        i++;
    }
    for(i = 0;i<number;i++)
    {
        printf("%d\n",prime[i]);
        if((i+1)%5) printf("\t");
        else printf("\n");

    }



    printf("simple action to judge isPrime? : %d\n",isPrime(100));

    return 0;
}