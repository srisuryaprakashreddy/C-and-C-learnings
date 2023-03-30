#include<iostream>
using namespace std;

class base {
	int arr[10];	
};

class b1: virtual public base { };

class b2: virtual public base { };

class derived: virtual public b1,virtual public b2 {};//derived is an object of the class base

int main(void)
{
cout<<sizeof(derived);// the size of the derived class has been decresed by 12.
getchar();
return 0;
}

