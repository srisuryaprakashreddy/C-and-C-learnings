#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	
	for(i=0;i<3;i++)
	
	{
	 printf("enter the values of elments in row number %d of a matrix=",i);

		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0;i<3;i++)
	
	{
	 printf("enter the values of elments in row number %d of b matrix=",i);

		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
 
 for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
}
printf("addition=\n");
for (i=0;i<3;i++)
{
	
	for(j=0;j<3;j++)
	{
		printf(" %d   ",c[i][j]);
	}
	printf("\n");
}
printf("subtraction=\n");
for(i=0;i<3;i++)
{
	
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]-b[i][j];
	}
}
for (i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d   ",c[i][j]);
	}
	printf("\n");
}
	
	
return 0;

}
