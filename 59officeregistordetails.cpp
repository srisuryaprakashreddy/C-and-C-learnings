//Write a C++ program to design a base class Person (name, address,
//phone_no). Derive a class Employee (eno, ename) from Person. Derive a
//class Manager (designation, department name, basic-salary) from
//Employee. Write a menu driven program to:
//a. Accept all details of 'n' managers.
// b. Display manager having highest salary
#include<iostream>
using namespace std;
class person
{public:
	char name[30];
	char address[50];
	char phone[20];

		
	
		void get_data()
		{	cout<<"enter employe name,address,phone number "<<endl;
			cin>>name;
			cin>>address;
			cin>>phone;
		}
};
class employee:public person
{  public:
	char eno[100];
	char  ename[50];

	void set_data()
	{	cout<<"enter the eno and e name of the employee"<<endl;
		cin>>eno;
		cin>>ename;
	}
};
class manager:public employee
{
	public:
		char desig[100];
		char depart[100];
		long int  salary[20];

	void bet_data()
	{cout<<"enter the designation,department,salary"<<endl;
			cin>>desig;
			cin>>depart;
			cin>>salary;
	}
};
int main()
{// manager m;
	int n ,i;
	cout<<"how many employess you want to enter"<<endl;
	cin>>n;
    for(i=1;i<=n;i++)
	{
		manager mi;
		mi.get_data();
		
    }	
     for(i=1;i<=n;i++)
	{
		manager mi;
		mi.set_data();
	}
	
     for(i=1;i<=n;i++)
	{
		manager mi;
		mi.bet_data();
		
    }	
    



return 0;
}
