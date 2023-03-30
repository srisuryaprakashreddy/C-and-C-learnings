#include<stdio.h>
int main()
{
	int i=0;
	char a[50];
	printf("enter the name");
	gets(a);
	//scanf("%[^\n]s",a);
	//printf("%s",a);
	puts(a);
	// to find the length of the string 
while(a[i]!='\0')
	{
	i++;
	}
	printf("the length of strings %d",i+1);
	return 0;
}
