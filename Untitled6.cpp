#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	float percentage;
};
void fun(struct student r1);
int main()
{
	struct student r2;
r2.id=5;
strcpy(r2.name,"ram");
r2.percentage=90.08;
fun(r2);
}
viod fun (struct student r1)
{
	
}
