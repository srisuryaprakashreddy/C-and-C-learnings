#include<stdio.h>

int linearsearch(int arr[],int size,int ele)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            return i;
        }
    }
}
int main()
{
    int n ;
    printf("enter the number of elements you want top enter in the array :");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements :",n);
    for (int i= 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int  size=sizeof(a)/sizeof(a[0]);
   int ele;
   printf("enter the elememt you want to search :");
   scanf("%d",&ele);
   int position=linearsearch(a,size,ele);
   printf("the position of the element is %d  \n  the index of the element is at %d ",position+1,position);
   return 0;
}