//array named used as pointer
#include<iostream>
using namespace std;
int main()
{
	float arr[3];
	int i;
	cout<<"enter any 3 elements "<<endl;
	
	for(i=0;i<3;i++)
	{
	 cin>>arr[i];
    }
    cout<<"the elements u entere are "<<endl;
    for(i=0;i<3;i++)
    {
    	cout<<"element number "<<i+1<<"  is   "<<*(&arr[0]+i)<<endl;
	}
	return 0;
}
