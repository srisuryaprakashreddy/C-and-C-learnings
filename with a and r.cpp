#include<stdio.h>
int  sum(int,int);
int sum(int a,int b)
{
	int d=0;
	d=a+b;
	return d;
	
}
int main ()
{
	int a,b,e ;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	e=sum(a,b);
	printf("sum=%d",e);
	return 0;
}
