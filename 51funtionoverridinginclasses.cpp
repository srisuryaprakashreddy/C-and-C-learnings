//cpp function overriding
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
	derived s1;
	s1.print();
	return 0;
}

