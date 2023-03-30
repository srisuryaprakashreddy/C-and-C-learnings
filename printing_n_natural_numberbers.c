#include<stdio.h>
void fun1(int n)
{
    if (n>0)
    {
        printf("%d  ",n);
        fun1(n-1);//tail recurrsion
    }}

void fun2(int y){
   
     if (y>0)
    {  
        fun2(y-1);
        printf("%d  ",y);//this part will be done at returning time
        
    }}

int main()
{
    int x;
    printf("enter how many  natural numbers you want to print in reverse ");
    scanf("%d ",&x);
    fun1(x);
    printf(" \n in consequitive order   \n");
    fun2(x);
}