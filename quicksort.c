
#include<stdio.h>
void swap(int* a, int* b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int low, int high)
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

void quick_sort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pivot_index = partition(arr, low, high);
    quick_sort(arr, low, pivot_index - 1);
    quick_sort(arr, pivot_index + 1, high);
  }
}

void print_array(int arr[], int size)
{
   for (int i =0; i < size; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

int main()
{
   int n;
   printf("Enter number of elements: ");
   scanf("%d", &n);

   int arr[n];

   printf("Enter %d integers: ", n);
   for (int i =0; i < n; i++)
     scanf("%d", &arr[i]);

   printf("Original array: \n");
   print_array(arr,n);

   quick_sort(arr,0,n-1);

   printf("Sorted array: \n");
   print_array(arr,n);

   return(0);
}