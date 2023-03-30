#include<stdio.h>
int fib(int n)
{  
    if(n<=1)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
    
     
   
}

int main()

{
    int x=5;
    printf("%d",fib(x));
}