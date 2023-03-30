#include<iostream>
using namespace std;
class A
{
  private:
   double lenght;
   double breadth;
   public:
   	
     A(double len,double bre)
     {
   	lenght=len;
   	breadth=bre;
   	
	 } 
 
 double area()
 {
 	return lenght *breadth;
 }
   	
};
int main()

{
	A wall1(10,10);
	A wall2(10,10);
	cout<<"the area of wall one is  "<<wall1.area()<<endl;
	cout<<"the area of second wall is  "<<wall2.area()<<endl;
	return 0;
	
}
