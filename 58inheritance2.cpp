//. Write a C++ program to calculate the percentage of a student using multilevel inheritance. 
//Accept the marks of three subjects in base class. A class
//will derived from the above mentioned class which includes a function to
//find the total marks obtained and another class derived from this class
//which calculates and displays the percentage of student.
#include<iostream>
using namespace std;
class marks
{
	public:
		float de;
		float dt;
		float cpp;
		marks()
		{
		cout<<"enter the marks of these subjects de ,dt,c++"<<endl;
	    }
		void get_data()
		{
		cin>>de>>dt>>cpp;
	    }
};
class total:public marks
{
	public:
	 float	total;
	 int sum()
	 {
	 return (de + dt + cpp);
     }
};
class avg:public total
{
   public:
   int mean()
   {
   	cout<<"average of the three  subjects is "<< sum()/3<<endl;
	   }	
};
int main()
{
	avg p;
	p.get_data();
	p.mean();
	return 0;
}
