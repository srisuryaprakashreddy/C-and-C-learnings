#include<stdio.h>
int main()

{
	// dynamic pointer is pointing an object in the memory  that has been deleted 
	//pointer  arthaamatic
	//u cannot add,mul,div,mod,bitwise and,or ,exor ,compliment addresses with another addressp1+p2
	//we can add ,increment,decrement,sub,comparision are possible with a variable p1+1
	//
	int arr[3]={1,2,3},i;
	int *ptr;
	ptr=arr;
	for(i=0;i<3;i++)
	{
		printf("%d",*ptr);
		ptr++; 
	}
	
	
	return 0;
	
}
