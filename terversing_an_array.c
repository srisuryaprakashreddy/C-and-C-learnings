#include<stdio.h>
int main(){
    int n, a[60],i;
    printf("enter the number of elements you want to enter in the array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array you had enterd is ");
      for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}