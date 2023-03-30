// sum of n natural numberes using a loop
#include<iostream>
using namespace std;
int main()
{
int sum=0,n,i;
cout<<"enter number of integers u wan to sum";
cin>>n;
for(i=1;i<=n;++i)	
{
sum+=i;
}
cout<<"sum of n natural numbers is   "<<sum<<endl;
return 0;
}
