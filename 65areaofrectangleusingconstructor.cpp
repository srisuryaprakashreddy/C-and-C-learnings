#include<iostream>
using namespace std;
class Area
{
  private:
    int length;
    int breadth;
  public:
    Area(): length(7), breadth(4){ }
    void GetLength()
    {
      cout<<"\nEnter length of the Rectangle: ";
      cin>>length;
      cout<<"\nEnter breadth of the Rectangle: ";
      cin>>breadth;
    }
    int Calculation()
    {
      return (length*breadth);
    }
    void Display(int temp)
    {
      cout<<"Area: "<<temp;
    }
};
int main()
{
  Area A1,A2;
  int temp;
  A1.GetLength();
  temp=A1.Calculation();
  A1.Display(temp);
  
  temp=A2.Calculation();
   return 0;
}
