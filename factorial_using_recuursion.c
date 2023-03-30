#include<stdio.h>

int factorial(int n)
{
    if (n==0 || n==1)
    return 1;
    else
    return factorial(n-1)*n;
}
int fact(int n)
{  int fact=1;
if (n==0 || n==1)
{
    printf(" 1 ");
}
else{
    for(int i=n;i>0;i--)
    {
        fact=fact * n;

    }}
}
 
 int main(){
    int x=factorial(5);
    printf("%d ",x);
    int y=fact(5);
    printf("%d ",y);
    return 0;
 }