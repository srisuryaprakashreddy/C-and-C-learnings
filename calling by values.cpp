#include<stdio.h>
void swap(int*,int*);
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
printf(" formal value a=%d  formal value b=%d",*a,*b);
}
int main()
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf(" actual value a=%d  actual value  b=%d",a,b);
	return 0;
}

