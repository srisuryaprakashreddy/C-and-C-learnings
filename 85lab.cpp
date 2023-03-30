//WAP to get the sum and subtraction of two complex number using operation overloading
#include<iostream>
using namespace std;
class over
{
	private:
		int real ,img;
	public:
	over ()
	{
		real=0;
		img=0;
	}
	over(int r,int i)
	{
		real=r;
		img=i;		
	}
	void print ()
	{
		cout<<"result = "<<real<<"+"<<img<<"i"<<endl;
	}
	over operator + (over r)
	{over temp;
	temp.real=real+r.real;
	temp.img=img+r.img;
	return temp;
		
	}
    over operator - (over r)
	{over temp;
	temp.real=real-r.real;
	temp.img=img-r.img;
	return temp;
		
	}
			
};
int main()
{float a,b,c,d,e,f;
cout<<"enter 3 complex numbers to add and subtract  in the form of a+ib "<<endl;
cin>>a>>b>>c>>d>>e>>f;

	over r1(a,b),r2(c,d),r3(e,f);
	over r4,r5;
	r4=r1+r2+r3;
    r5=r1-r2-r3;

	cout<<"addition of complex numbers is "<<endl;
	r4.print();
    cout<<"subtraction of complex numbers is "<<endl;
    r5.print();
	return 0;
}
