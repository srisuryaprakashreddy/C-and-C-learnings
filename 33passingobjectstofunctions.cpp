#include<iostream>
using namespace std;
class D
{
	public:
		double marks;
		D(double m)
		{
			marks=m;
		}
};
void average(D s1,D s2)
{
	cout<<"average of two numbers is "<<(s1.marks+s2.marks)/2;
}
int main()
{
  D r1(99);
D r2(90);
	average(r1,r2);
	return 0;
}
