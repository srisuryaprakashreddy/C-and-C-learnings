#include<stdio.h>
void swap(int,int);
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("  formal data a=%d   b=%d",a,b);
}
int main()
{
	int a,b;
	printf("enter the values of a,b ");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("  actual data a=%d  b=%d",a,b);
	return 0;
	
}
