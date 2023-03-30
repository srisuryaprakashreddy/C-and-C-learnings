#include <iostream>
using namespace std;
int demo (int x, int y)
{
	return x+y;
}
float demo (float x)
{
	return x;
}
int demo (int m,int n, int o)
{
return m+n+o;
}
int main()
{
	int r1,r2;
	float z;
	r1=demo(10,20);
	z=demo(10.5);
	r2=demo(10,30,5);
	cout<<"Sum is:"<<r1<<endl;
	cout<<"Float Value:"<<z<<endl;
	cout<<"Sum is"<<r2<<endl;
	return 0;
}