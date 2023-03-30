//cpp function overriding using scope resolution operator for :: accessing the print in the base class
#include<iostream>
using namespace std;
class base
{
	public:
		void print()
		{
			cout<<"it is public class"<<endl;
		}
};
class derived :public base
{
  public:
      void print()
	  {
	  	 cout <<"it is derived class"<<endl;
	  }	
};
int main()
{
	derived s1,b1;
	s1.print();
	
	b1.base::print();
	
	return 0;
}

