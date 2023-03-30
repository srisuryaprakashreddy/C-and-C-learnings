#include<iostream>
using namespace std;
class area
{
	int a,l,b;
	public:
		area(){
			l=5;b=6;
			cout<<"simple constructor called"<<endl;
			cout<<"the values of l,b are "<<l<<","<<b<<endl;}
		area(int x,int y){
			l=x;b=y;}
			void cal();
			void print();
			~area();
};
void area::cal()
{
	a=l*b;
}
void area::print()
{
	cout<<"area is equall to "<<a<<endl;
}
area::~area()
	{
	cout<<"object is being deleted "<<endl;}
int main()
{
	int l,b;
	area a1;
	a1.cal();
	a1.print();
	cout<<"enter the length breadth for parameterised constructor "<<endl;
	cin>>l>>b;
	
	area a2(l,b);
	a2.cal();
	a2.print();
	return 0;
}
