#include<iostream>
using namespace std;
class A
{
  private:
  int n;
  friend class  B ;
  public:
  A():n(20)	{}
};
class B
{
  private:
  int m;
    public:
  B():m(10)	{}
  int ram()
  {
  	A a;
  	return(a.n+m);
	  }	
};
int main()
{
	B s;
	cout<<"sum is  "<<s.ram()<<endl;
}

