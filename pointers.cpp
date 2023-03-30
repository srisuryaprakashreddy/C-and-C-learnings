#include<stdio.h>
int main()
{
	//pointers
	//specify trhe type of the data of the pointer 
	//the addres of the vastriable is strored in the pointer of the same variable
	//& varible is the address of the variable
	//* is the used todeclare a POINTER Variable  
	int a ,*b;
		char c;
char *d;
	c='A';
	d=&c;
	a=10;
	b=&a;
	printf("%d ,%d ,",a,*b);
	printf("%d ,%d",&a,b);
printf("  %c  ,%c  , ",c,*d);
	printf("%c  ,%c ",&c,d);
	return 0;
	
}
