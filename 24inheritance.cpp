#include<iostream>
using namespace std;
class A
{
	private:
	int a;
	void  fun()
	{
	cout<<"enter the value of A"<<endl;
	cin>>a;
    }
    
	
};
class B:public A
{
	public:
		int b;
		void get_data()
		{
			cout<<"enter the value of B"<<endl;
			cin>>b;
			
		}

};
class C:public B
{
	public:
		
	 int c;
	 void set_data()
 	{
		cout<<"enter the value of C"<<endl;
		cin>>c;
	 }
};
class D:public C
{
	public:
		void product()
		{
		 cout<<"Product is:"<<a*b*c<<endl;
		}
		
};
int main()
{
	D obj1; //object class d
	obj1.fun();
	obj1.get_data();
	obj1.set_data();
	obj1.product();

	
	return 0;
}
