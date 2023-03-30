#include<iostream>
using namespace std;
int main()
{
	int n,i;
	long double  factorial=1.0;
	cout<<"enter the vsalue of the number you want to find the factorial of   ";
	cin>> n;
	if (n<0)
	{
		cout<<"factorial is not possible for negative numbers";
	}
	else
	{
		for (i=1;i<=n;i++)
		{
			factorial*=i;//factorial=factorial *i the code is equivallent to this statement
		}
		cout<<"the factorial of the number is  "<<factorial<<endl;
		
	}
	return 0;
}
