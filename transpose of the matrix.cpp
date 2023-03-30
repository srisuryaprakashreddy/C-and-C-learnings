#include<stdio.h>
int main()
{
	int i,j,n,m,a[50][50],c[50][50];
	printf("enter no of rows in the matrix=");
	scanf("%d",n);
	printf("enter no of coloums in the matrix=");
	scanf("%d",m);
		for(i=0;i<n;i++)
	{ printf("enter the elements of   row matrix1= ");
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=a[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" transpose \n %d  ",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
