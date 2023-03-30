// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of students gpa you want to enter "<<endl;
	cin>>n;
	float *gpa;
	gpa=new float[n];
	cout<<"enter the gpa's of students "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>*(gpa+i);
		
		
	}
	cout<<"gpa's of the students are"<<endl;
		for (int i=0;i<n;i++)
	{
	cout<<*(gpa+i)<<endl;
		
		
	}
	delete []gpa;
	return 0;	
	
}
