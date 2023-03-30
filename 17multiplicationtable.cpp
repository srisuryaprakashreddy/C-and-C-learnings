//multiplication tables
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"the the number which table you want  ";
	cin>>n;
	for (i=0;i<=20;i++)
	{
		cout<<n<<" * "<<i<<"=" <<n*i<<"\n";
	}
	return 0;
}
