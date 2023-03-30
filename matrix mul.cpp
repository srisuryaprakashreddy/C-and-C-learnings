#include<stdio.h>
int main()
{
	int i,j,n,m,p,q,a[50][50],b[50][50],c[50][50],k,sum=0;
	printf("enter the value of rows in the matrix1=");
	scanf("%d",&n);
	printf("enter the value of colums in the matrix1=");
	scanf("%d",&m);
	printf("enter the value of rows in the matrix2=");
	scanf("%d",&p);
	printf("enter the value of colums in the matrix2=");
	scanf("%d",&q);
	if(m==p)
	{
	
	for(i=0;i<n;i++)
	{ printf("enter the elements of  %d row matrix1= ",i);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<p;i++)
	{ printf("enter the elements of  %d row matrix2= ",i);
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");



for(i=0;i<n;i++)
{
	for(j=0;j<q;j++)
	{
		for(k=0;k<p;k++)
		{
			sum=sum+a[i][k]*b[k][j];
			
		}
		c[i][j]=sum;
		sum=0;
	}
	
	
}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		printf("%d    ",a[i][j]);
	}
	printf("\n");
}
printf("  [*]");
printf("\n");
for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
	{
		printf("%d    ",b[i][j]);
	}
	printf("\n");
}
printf("\n");
printf("   ||");
printf("\n");
for(i=0;i<n;i++)
{
	for(j=0;j<q;j++)
	{
		printf("%d    ",c[i][j]);
	}
	printf("\n");
}

}
else
printf("check your rows and colum numbers");

	return 0;
	
}
