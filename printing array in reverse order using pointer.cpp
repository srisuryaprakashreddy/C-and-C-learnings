#include<stdio.h>
int main()
{
	int *ptr,j,n,i,arr[50];
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr = &arr[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d  ,   %d  ,",*ptr ,ptr);
		
		ptr--;
	}
	return 0;
}
