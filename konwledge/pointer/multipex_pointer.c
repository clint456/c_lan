#include <stdio.h>

int main(int argc, char const *argv[])
{
	int demo01(void);
	int demo02(void);
	demo02();
}

int demo01(void)
{
	char *name[]= {"Follow me","BASIC","Great Wall","FORTRAN" ,"Computer design"};
	char **p;
	int i;
	for(i=0;i<5;i++)
	{
		p=name+i;
		//name是一维指针
		//p指向一维指针 
		printf("%s\n",*p);
	}
	return 0;
}

int demo02(void)
{ 
	int a[5] = {1,3,5,7,9};
	int *num[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
	int **p,i;
	p = num;
	for(i=0;i<5;i++)
	{
		printf("%d",**p);
		p++;
	}
	printf("\n");
	return 0;
	
}

