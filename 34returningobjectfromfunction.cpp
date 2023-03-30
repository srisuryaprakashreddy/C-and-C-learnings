//returning object from a function
#include<iostream>
using  namespace std;
class student
{ public:
	double marks1,marks2;
};
student ramram()//funtion name is ram ram ram ram is not an obj
{ student ram;
	ram.marks1=99;
	ram.marks2=99;
	cout<<"markls obtained by ram "<<ram.marks1 <<" "<<ram.marks2<<endl;
	return ram;
}
int main()
{
	student s1;
	s1=ramram();//object s1 is equal to function ramram because the returning object
	return 0;
	
}
