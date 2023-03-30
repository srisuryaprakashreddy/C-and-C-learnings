//wap to create a class student to get details like name,uid,age,phone number using 
//member function of same class,create a child class of student class 
//and get the details of five subjects,create child class info as  "student_details"
//and print the emails of the students and the average of 5 subjects
#include<iostream>
using namespace std;
class student
{ public:
	char name[50];
	char UID[10];
	int age;
	int number;
	char email[100];
	public:
	void get_data()
	{
		cout<<"enter your details "<<endl<<"  Name  "<<"UID  "<<"Age  "<<"Number  "<<"email  "<<endl;
		cin>>name>>UID>>age>>number>>email;
		
	}
	
	
};
class child:public student
{public:
	int cpp;
	int maths;
	int pcs;
	int dt;
	int de;
	
	void display()
	{
		cout<<"enter your marks  "<<"cpp "<<"maths "<<"pcs "<<"dt "<<"de "<<endl;
		cin>>cpp>>maths>>pcs>>dt>>de;
		cout<<"average of marks of the student are "<<(cpp+maths+pcs+dt+de)/5<<endl;
		cout<<"the students email address is "<<email<<endl;
	}
	
};
int main()
{
	child s;
	s.get_data();
	s.display();
}
