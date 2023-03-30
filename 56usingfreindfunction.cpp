#include<iostream>
using namespace std;
class classB;
class classA
{
  private:
  int n;
  friend int add(classA ,classB);
  public:
  classA():n(10){}	
};
class classB
{
  private: 
  int m;
 friend int add(classA ,classB);
 public:
 classB() : m(20) {}	
};
int add ( classA x,classB y )
{
	return (x.n+y.m);
	
}
int main()
{
    classA p;
    classB q;
    cout<<"sum of the values is "<<add(p,q)<<endl;
    return 0;
}


