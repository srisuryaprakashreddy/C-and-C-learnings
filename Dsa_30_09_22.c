//array,string ,stack
//experiment 1 
//insertion and deletion of array elements 
#include<stdio.h>


int main()
{
    int n;
    printf("enter the elements you want to enter in the array");
    scanf("%d",&n);
    printf("enter the elements of the array ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  //  while(1)
   //{ 
       /* int b;
       printf("1.inserting the  element in the array at specific position \n");
       printf("2.deleting the element in the array at specific position \n");
       printf("3.exit \n");
       scanf("%d",&b);
        switch(b)
        {
            case(1):
            {*/
                 int pos,ele;
                  printf("enter the position at which you want to insert a new element");
                   scanf("%d",&pos);
                 printf("enter the elemrnt you want to enter in that position");
                 scanf("%d",&ele);
                 int s=sizeof a/sizeof a[0];
                 int temp;
                 for(int i=s+2;i>=pos-1;i--)
                 { temp=a[i-1];
                   a[i]=temp;
                 }
                 a[pos-1]=ele;
                 printf("the updated array is ");
                 for(int i=0;i<n;i++)
                 {
                  printf("%d  ",a[i]);
                  }
               // break;
           // }
          /*  case(2):
            {
                delete();
                break;
            }
            case(3):
            exit(1);
        }
    }*/

}    

