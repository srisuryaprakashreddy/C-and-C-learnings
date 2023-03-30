// finding all roots of a qurdrastic equation
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	float a,b,c,x1,x2,discriminant,realPart,imaginaryPart;
	cout<<"enter the coefficents of a,b,c";
	cin>>a>>b>>c;
	discriminant=b*b-4*a*c;
	if (discriminant>0)
	{
		cout<<"x1="<<-b-sqrt(discriminant)/2*a;
		cout<<"x2 "<<-b+sqrt(discriminant)/2*a;
	}
    else if (discriminant=0)
	{
		cout<<"x1=x2  "<<-b/2*a;
	}
	else
	{
	    realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
	}
}
