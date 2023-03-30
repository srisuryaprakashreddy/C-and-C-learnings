#include<iostream>
using namespace std;
class ITEM
{ public:
int itemcode[5];
float itemprice[5];
public:
void initialise();
float largest();
float sum();
void display();

};
void ITEM :: initialise()
{
for(int i=0;i<5;i++)
{
cout<<endl<<"Enter item code:"<<"\n";
cin>>itemcode[i];
cout<<endl<<"Enter item price:\n";
cin>>itemprice[i];
cout<<endl;
}
}
float ITEM :: largest()
{
float large=itemprice[0];
for(int i=1;i<5;i++)
{
if(large<itemprice[i])
large=itemprice[i];
}
return large;
}
float ITEM :: sum()
{
float sum=0;
for(int i=0;i<5;i++)
{
sum+=itemprice[i];
}
return sum;
}
void ITEM :: display()
{
cout<<"\nCode price:\n";
for(int i=0;i<5;i++)
{
cout<<endl<<itemcode[i];
cout<<"\t"<<itemprice[i];
}
cout<<endl;
}
int main()
{
ITEM order;
order.initialise();
float total,biggest;
int ch=0;
do
{
cout<<"Main menu.\n";
cout<<"\n1.Display largest price.";
cout<<"\n2.Display sum of prices.";
cout<<"\n3.Display item list.";
cout<<"n4.Exit!";
cout<<"\nEnter your choice:\n";
cin>>ch;
switch(ch)
{
case 1:
biggest=order.largest();
cout<<"The largest price is "<<biggest<<endl;
break;

case 2:
total=order.sum();
cout<<"The sum of prices is "<<total<<endl;
break;

case 3:
order.display();
break;

default:
cout<<"EXIT!\n";
break;

}
}while(ch>=1&&ch<=3);
return 0;
}


