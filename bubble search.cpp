#include<stdio.h>
int main()
{
	int i,j,a[10],n,temp;
printf("enter the no of elements in the array");
scanf("%d",&n);	
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[j]>a[i])
		{
			temp=a[i];
			a[i]=a[j+1];
			a[j+1]=temp;
		}
	}
}
for(i=0;i<n;i++)
printf("[");
{
	printf("%d",a[i]);
}
printf("]");
}
	
