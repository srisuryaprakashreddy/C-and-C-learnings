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
    //printf("at what position you want to enter your new element at");
    int pos,ele;
    printf("enter the postion you what to enter the new element at ");
    scanf("%d",&pos);
    
    printf("enter the element you what to add to the array");
    scanf("%d",&ele);    
    int temp=0;
   for(int j=pos-1;j<n;j++)
   {
     temp=a[j];
      a[j]=a[j+1];
    a[j+1]=temp;
    

   }
   
   a[pos-1]=ele;
   //displaying the array
   for(i=0;i<n+1;i++)
    {
        printf("%d  ",a[i]);
    }

    //deletion of element at a particular location
    int pos1;
    printf("enter the position at which you want to delete the element");
    scanf("%d",&pos1);
    int tem;
    for(int k=pos-1;k>n-1;k++){
        tem=a[k];
        a[k+1]=tem;
    }
     for(i=0;i<n+1;i++)
    {
        printf("%d  ",a[i]);
    }

    


    return 0;
    
}