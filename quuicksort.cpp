#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a = *b;
    *b = temp;
}

int patition(int arr[],int low ,int high)
{
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return i + 1;
}

int quicksort(int arr[],int low,int high)
{
    if(low < high)
    {
        int pivotindex=patition(arr,low,high);
        quicksort(arr,low,pivotindex - 1);
        quicksort(arr,pivotindex + 1 ,high);
    }
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
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
//    int ele;
//    printf("enter the elememt you want to search :");
//    scanf("%d",&ele);
//    int position=binarysearch(a,0,n-1,ele);
//    printf("the position of the element is %d  \n  the index of the element is at %d ",position+1,position);
  quicksort(a,0,n-1);
  printarray(a,size);
 return 0;
}