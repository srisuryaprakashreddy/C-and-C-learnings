#include<stdio.h>
int sum();
int sum()
{
	int a,b,c;
	printf("enterthe values of a,b ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
int main()
{
	int d;
	d=sum();
	printf("sum is %d",d);
	return 0;
}
