#include<stdio.h>
int main()
{
	//pointer variables ca n  only be sub when ptr2>ptr1
	int a[]={1,2,3};
	int *p1,*p2;
	char str[]="hello";
	char *q1;
	q1=str;
	
	p1=a;
	p2=p1+2;
	printf("the difffernce is %d  \n",*p2-*p1);
	while(*q1!='\0')
	{
		printf("%c",*q1);
		q1++;
	}
	return 0;
}
