#include<iostream>
using namespace std;
class A
{
  private:
   double length;
   double breadth;
   public:
   	
     A(double len,double bre)
     {
   	length=len;
   	breadth=bre;
   	
	 } 
 
 double area()
 {
 	return length*breadth;
 }
   	
};
int main()

{
	int x,y,p,q,n,i;
	cout<<"enter no of wall areas you want to measure"<<endl;
	cin>>n;
	
for (i=0;i<n;i++)
{  cout<<"enter the values you want to find the area of "<<endl;
    cin>>x>>y;
	A si(x,y);
	cout<<"the area of wall no " <<i+1 <<"is "<<si.area()<<endl;
	
}

	return 0;
	
}
