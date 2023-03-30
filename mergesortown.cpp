#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		int m = (r + l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}
int main(){
    int n;
    printf("enter how many elements you want to enter ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
  mergeSort(a,0,size-1);
  printf("sorted array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


}


