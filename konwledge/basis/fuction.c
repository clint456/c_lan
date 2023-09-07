#include <stdio.h>

void swap();
//这里欺骗了编译器

int main(int argc, char const *argv[])
{	
	int a = 5;
	int b = 6;

	swap(a,b);
	//这里编译器认为a，b是int型
	{
		int a = 0;

		printf("a=%d\n",a);
	}
	printf("a=%d,b=%d\n",a,b);

	return 0;
}


void swap(double a, double b)
{
	int swap;
	int t = a;
	printf("in swap a=%f,b=%f\n",a,b);
}