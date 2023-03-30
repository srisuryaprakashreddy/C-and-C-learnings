#include<stdio.h>
int main()
{
	int even ,odd ,number,t;
	printf("enter the number=");
	scanf("%d",&number);
	t=number;
	if (number%2==0)
	{
		goto even;
	}
	else{
		goto odd;
	}
	even:printf("number is  %d even",t);
	return 0;
	odd:printf("number is odd");
	return 0;
	}
