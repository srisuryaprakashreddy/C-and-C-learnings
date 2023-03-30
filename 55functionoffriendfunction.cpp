//working of friend function
#include<iostream>
using namespace std;
class A
{
	private:
		int second;
		friend int ram(A);
	public:
A (): second(50){}//constructor
};
int ram(A a)
{
	
	a.second+=10;
	return a.second;
	
 } 
 int main()
 {
 	A s;
 	
 	cout<<"number of seconds  is  "<<ram(s)<<endl;
 	return 0;
 	
 }
