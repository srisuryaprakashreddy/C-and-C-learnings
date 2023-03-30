#include<iostream>
using namespace std;

int x = 10;
void fun()
{
	int x = 2;
	{
		int x = 1;
		cout << ::x << endl;// priority is given to the 
	}
}

int main()
{
	fun();
	return 0;
}

