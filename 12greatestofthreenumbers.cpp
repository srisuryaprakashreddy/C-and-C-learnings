// finding the greatest of thre input numbers
#include<iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout<<"enter any three numbers";
	cin>>a>>b>>c;
	if(a>=b&&a>=c)
	 cout<<"the largest number is "<<a;
	 if(b>=a&&b>=c)
	 cout<<"the largest number is  "<<b;
	if (c>=a&&c>=b)
	  cout<<"the largest value is  "<<c;
 return 0;
}
