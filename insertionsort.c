#include<stdio.h>
#include<stdlib.h>
int main()
{   int n;
    printf("no of elements you want to enter");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d elements \n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    //insertion sort
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp)
        { a[j+1]=a[j];
          j-- ;          
        }
        a[j+1]=temp;

    }
    printf("the sorted array is ");
    for( int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

}