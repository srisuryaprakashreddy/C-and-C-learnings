#include<stdio.h>
int main()
{
    int **ptr;
    int *a;
    int b=10;
    a=&b;
    *ptr=a;
    printf("address of the ptr is %d \nthe value in it is %d ",*ptr,**ptr);
    return 0;
}