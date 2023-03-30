#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter how many arrays you want to enter ";
	int a[n];
	cout<<"enter "<<n<< " elements"<<endl;
	ofstream file("array.txt");
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
		for(int i=0;i<n;i++)
	{
	   file<<a[i]<<" ,";
		
	}
	
	file.close();
	
	string text;
	ifstream read("array.txt");
	while (getline (read, text))
	{
		cout<< text;
	}
	read.close();
	
}


