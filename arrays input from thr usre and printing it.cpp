#include<stdio.h>
int main()
{
	int a[50],i,n,per,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	per=sum/n;
	printf("sum=%d",sum);
	printf("average=%d\n",per);
	printf("\n{");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	//	for(i=0;i<n;i++)
	//	{
		
	//	continue;
       //	}
      // if(i==n+1)
      // { break;
	  // }
		printf(",");
		
	}
	printf("}");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",&a[i]);
	}
	
	return 0;
}
