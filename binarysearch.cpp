#include<stdio.h>
int binarysearch(int arr[],int l,int r,int ele)
{
    if(r>=l)
    {
        int m=(l+r)/2;
        if(arr[m]==ele)
        {
            return m;
        }
        if(arr[m]>ele)
        {
            return binarysearch(arr,m+1,r,ele);
        }
        if(arr[m]<ele)

        {
            return binarysearch(arr,l,m-1,ele);
        }
    }
    return -1;

}
int main()
{
    int n ;
    printf("enter the number of elements you want top enter in the array :");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements in sorted order only :",n);
    for (int i= 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int  size=sizeof(a)/sizeof(a[0]);
   int ele;
   printf("enter the elememt you want to search :");
   scanf("%d",&ele);
   int position=binarysearch(a,0,n-1,ele);
   printf("the position of the element is %d  \n  the index of the element is at %d ",position+1,position);
   return 0;
}