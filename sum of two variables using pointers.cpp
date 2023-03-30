#include<stdio.h>
int main()
{
	int a, b,*c,*d;
	printf("enter the values of a and b=");
	scanf("%d",&a);
	scanf("%d",&b);
	
	c=&a;
	d=&b;
	printf(" sum of a+b= %d",*c+*d);
	if(*c>*d)
	{
		printf("  \nbig number %d",*c);
		
	}
	else if(*c=*d)
	{
		printf("both numbers are equall");
	}
	else
	printf("big number is %d ",*d);
	
	return 0;
}
