#include <stdio.h>


int main(int argc, char const *argv[])
{
	int w=10,x=20,y=30,z=40;
	printf("%d\n",w<x?w:y<z?y:z);
	return 0;
}