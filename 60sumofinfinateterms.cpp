//sum of 10 numbers
#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[100],sum=0;
	cout<<"how many number you want to enter";
	cin>>n;
	cout<<"enter any "<<n<< " numbers for addition"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>*(arr+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(arr+i);
	}
	cout<<"sum of "<<n<<" numbers is "<<sum<<endl;
	return 0;
}

