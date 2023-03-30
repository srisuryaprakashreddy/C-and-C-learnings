//operator overloading for binary operator
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
			
};
int main()
{
	over r1(5,10),r2(6,8),r3(8,9);
	over r4;
	r4=r1+r2+r3;
	
	r4.print();
	return 0;
	
}
