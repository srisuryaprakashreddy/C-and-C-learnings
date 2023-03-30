#include<stdio.h>
int *larger(int*,int*);
int *larger (int*x,int*y)
{
	if(*x>*y)
	return x;
	else
	return y;
}
int main()
{
	//funtion returning pointer to interger
	int a,b, *p;
	printf("enter the two numbers=");
	scanf("%d%d",&a,&b);
	p=larger(&a,&b);
	printf("the largest is%d",*p);
	//int *(*p)(a);//funtion pointer or pointer to thr function
//*p(a) is function returning pointer 
	
	
	return 0;
}

