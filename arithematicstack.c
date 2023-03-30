#include<stdio.h>
#define size 100
int stack[size];
int top=-1;
void push(int a);
int pop();
void main()
{
    char X[30];
    int i,v,y,z;
    printf("enter any pe");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(isalpha(x[i]));
        printf("enter the value",x[i]);
        scanf("%d",&v);
        push(v);
    }
    elseif(isdigital(x[i]))
    {push(x[i] - '0');}
    else{
    y=pop();
    z=pop();
    switch(x[i])
    {
      
    }
   }
   void push(int a)
   {
    if(top==size-1)
    printf("stack is full");
    else
    stack(++top)=a;
   }
   int pop()
   {
    if(top==-1)
    printf("stack empty");
    else
    retrun(top--)
   }
}