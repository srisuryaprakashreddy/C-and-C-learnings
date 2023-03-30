#include<stdio.h>
//insertion  deletion  

int main()
{
	int n;
	
	printf("how many number of elements you want to enter in the array \n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
           scanf("%d",&a[i]);
	}
	printf("the array you had created is");
	for(int i=0;i<n;i++)
        {
           printf("%d",a[i]);
        }
	printf("enter the number of your choice \n 1.insertion \n 2.deletion \n 3.exit");

        int s;
	scanf("%d",&s);
	//while(1)
	//{
		switch(s){
		case 1:
		{ int ele ,pos;
			printf("enter the position you want to insert");
				scanf("%d",&pos);
			printf("enter the element you want to enter");
			scanf("%d",&ele);
			int temp1,temp2;
                       for(int j=pos-1;j<=n;j++)
		       {
			       temp1=a[j];
			       temp2=a[j+1];
			       a[j+1]=temp1;
			       a[j+2]=temp2;
			  
			   		        }

			a[pos-1]=ele;
				        for(int i=0;i<n;i++)
        {
           printf("%d",a[i]);
        }
		}}}
