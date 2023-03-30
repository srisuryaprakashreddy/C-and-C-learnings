# include<stdio.h>
union test1  
{
	int x,y;
};
int main()
{
	union test1 t1;
	t1.x=23;
	printf("after putting x=23,the values of x and y are %dand %d",t1.x,t1.y);
	t1.y=20;
	printf("after putting y=20,the values of x and y are %dand %d",t1.x,t1.y);
	return 0;
}
