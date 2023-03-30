#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    char name[100];
    int age,uid;
    void get_data()
    {
        cout<<"enter the details of student"<<endl;
       cout<<"\n name :"<<endl;
        cin.getline(name,100);        
        cout<<"\n age :"<<endl;
       
        cin>>age;
        cout<<"\n uid :"<<endl;
        cin>>uid;        
    }
};
class marks:public student
{
    public:
     int phy,che,de,dt;
     void set_data()
     {
         cout<<"enter the marks of 4 subjects of the student ";
         cout<<"\n physics :";
         cin>>phy;
          cout<<"\n chemistry :";
         cin>>che;
            cout<<"\n de :";
         cin>>de;
             cout<<"\n dt :";
         cin>>dt;
     }
};
class sports
{
    public:
   char name1[20];
    int  mark;
    void get_set()
    {
        cout<<"enter name of the sport :";
          cin.getline(name1,20);
        cout<<"\n enter marks obtained :";
        cin>>mark;
    }
};
class result :public sports ,public marks
{
    public:
    void print()
    {
        get_data();
        set_data();
        get_set();
        cout<<"total marks are "<<phy+che+de+dt+mark<<endl;
    }
};
int main()
{
    result a;
    a.print();
    return 0;
}