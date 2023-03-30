#include<stdio.h>
int fun(int n) 
{   
    if(n>0){ 
     printf("%d  ",n);
    fun(n-1);
    printf("%d  ",n);
    }
    if(n==0)
    {
        printf(" \ndecending recursion :");
    }
    

}
int main()
{
    int x=3;
    printf("accending recursion :");
    fun(x);  

}
