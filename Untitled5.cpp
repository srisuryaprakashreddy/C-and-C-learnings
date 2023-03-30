#include<stdio.h>
struct address
{
	char city [20];
	int pin  ;
	long int phn;

};
struct employee
{
	char name[10];
	struct address a1;
};
int main()
{
	struct employee e1;
	printf("enter the employee details");
	scanf("%s%s%d%ld",e1.name,e1.a1.city,&e1.a1.pin,&e1.a1.phn);
	printf(" the employee details are");
	printf("%s%s%d%ld",e1.name,e1.a1.city,e1.a1.pin,e1.a1.phn);
}		
