#include<stdio.h>
pointer(int);
pointer(int a)
{
	int *ptr;
	
	ptr=&a;
	return ptr;
}
int main()

{
    int b=2;
    int *ptr;
	pointer (b);
	printf("address of b is %d",ptr);
	return 0;
}
