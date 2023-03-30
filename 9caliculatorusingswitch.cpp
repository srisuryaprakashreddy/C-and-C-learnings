//making a simple caluculator using switch statement
#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	cout<<"enter the values u want to caluculate 2  "<<endl;
	cin>>a>>b;
	cout<<"enter the operation  +  -  /  *"<<endl;
	cin>>op;
	switch(op)
		{
			case'+':
				cout<<"sum "<<a+b<<endl;
				break;
			case'-':
				cout<<"sub "<<a-b<<endl;
				break;	
			case'*':
				cout<<"mul "<<a*b<<endl;
				break;
			case'/':
				cout<<"div "<<a/b<<endl;
				break;
			default:
			    cout<<"u have entered a wrong operator";
			    break;
								
		}
	return 0;	
}
