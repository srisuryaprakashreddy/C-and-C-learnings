#include<stdio.h>
int main()
{
	int a=10;
	int *p1,**p2;
	p1=&a;
	p2=&p1;
	printf("%d ,%d  ,%d  ,%d  ,%d   ,%d ",a,*p1,**p2,&a,p1,p2);
	return 0;
}
