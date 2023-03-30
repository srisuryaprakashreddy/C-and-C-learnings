include<stdio.h>
int main()
{
	//what ever is  placed right side is the r value 
	//left side is called as the  l values
	//we can asscess the arrau=y elements 
	// print the array  elements in revesie order we should run from the n-1 to 0 
	int *p,i;
	int a[3]={1,2,3};
	p=&a[2];
	//q=p;
	for(i=0;i<3;i++)
	{
		printf("%d  ,",*p);
		p--;
	 } 
	return 0; 
}
