#include<stdio.h>
void tower (int n,int a,int b,int c)
{
    if(n==0)
    {
        return;
    }
    else
    {
        tower(n-1,a,b,c);
        printf("move n disk,a,b");
        tower(n-1,c,a,b);
    }


void main()
{
    int n;
    printf("enter the no of disks");

    scanf("%d",&n);
    tower(n,a,b,c);
}}