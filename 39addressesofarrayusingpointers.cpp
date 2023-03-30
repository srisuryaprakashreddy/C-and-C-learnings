//pointers and arrays wap to display the each element address of an array
// C++ Program to display address of each element of an array 

#include <iostream>
using namespace std;

int main()
{
 int i,n,*pointer;
 cout<<"enter how many elements u require in the array "<<endl;
 cin>>n;
 int arr[n];
 pointer=arr;
cout<<"addres of the elements"<<endl;
 for(i=0;i<n;++i)
 {
 
 	cout<<"pointer+"<<i<<"="<<pointer+i<<endl;
 }

    return 0;
}
