#include<stdio.h>
int main()
{
    int a[]={1,5,3,10,9,12};
    int temp;
    int n=sizeof(a)/sizeof(int);
    printf("the siz eof the array is %d",n);

    for (int i=1;i<n;i++)
    {
        temp=a[i];
        int j=i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        
    }
    for(int k=0;k<n;k++)
    {
        printf(" \n%d ",a[k]);
    }
}