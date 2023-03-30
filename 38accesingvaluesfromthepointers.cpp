// giving pointer a address of a integer and printing the intiger accesing pointer
#include<iostream>
using namespace std;
int main()
{
	int *pointer,p;
	p=10;
	pointer=&p;
	cout<<"address of integer p is "<<pointer<<endl;
	cout<<"value of the integers in the address p is "<<*pointer<<endl;
	return 0;
}
