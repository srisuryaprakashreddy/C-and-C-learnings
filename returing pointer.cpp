//Write a function code that is returning pointer to the larger value out of two passed values.
#include<stdio.h>
int *s(int , int );
int *s(int a[], int n)
{
	int max=0;
for (int i = 0; i < n; i++)
{
if(a[i] > max)
{max = a[i];}
}
return &max;
}
int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);// we will get the sizen of the array
	int *greater=s(a,n);
	printf("%d",*greater);
	return 0;
	
}


