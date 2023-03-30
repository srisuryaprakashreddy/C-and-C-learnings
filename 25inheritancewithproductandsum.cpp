#include<iostream>
using namespace std;
class A
{
	public:
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
		void sum()
		{
			cout<<"sum of integers is "<<a+b+c<<endl;
			
		}
	 void factorial()
	   {
	   	  int i=1, fa=1,fb=1,fc=1;
	   	  for(i=1;i<=a;i++)
	   	  {
	   	    fa=fa*i;
	   	    
		 }
		    for(i=1;i<=b;i++)
	   	  {
	   	    fb=fb*i;
	   	   
		 }
		  for(i=1;i<=c;i++)
	   	  {
	   	    fc=fc*i;
	   	 
		 }
		 cout<<"factorial of a "<<fa<<endl;
		 cout<<"factorial of b "<<fb<<endl;
		 cout<<"factorial of c "<<fc<<endl;
		 
	   	  
	   }
		
		
};
int main()
{
	D obj1; //object class d
	obj1.fun();
	obj1.get_data();
	obj1.set_data();
	obj1.product();
	obj1.sum();
	obj1.factorial();
	return 0;
}
