#include<iostream>
using namespace std;
int main()
{
	int a, b, temp;
	cout<<"enter two value for swapping"<<endl;
	cin>>a>>b;
	cout<<"number before swapping   "<<a << "  "<<b<<"\n";
	temp=a;
	a=b;
	b=temp;
	cout<<"numbers after swapping are   "<<a<<"   "<<b;
}
