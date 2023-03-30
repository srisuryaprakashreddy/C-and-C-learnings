#include<stdio.h>
int main()
{
	char  a[50];
	 int i=0;
	 printf("enetr the string");
	 gets(a);
	 puts (a);
	 while( a[i]!='\0')
	 {
	 	i++;      
	 }
	 printf("\n lenth of the string is %d",i-1);
	 return 0;
	 
}
