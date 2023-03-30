#include<stdio.h>
int fact(int );
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
		
}
int main()
{
	int n,g;
	printf("enter the value of n=");
	scanf("%d",&n);
	g=fact(n);
	printf("The factorial = %d",g);
	return 0;
}
