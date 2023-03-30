#include<stdio.h>

#include<conio.h>

int main()

{

int a,b,H;

printf("Enter two numbers :\n");

scanf("%d %d",&a,&b);

for(H=a>b?b:a;H<=(a>b?b:a);H--)

{

if(a%H==0&&b%H==0)

break;

}

printf("GCF is %d",H);

getch();

}
