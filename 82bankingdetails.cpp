#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    int acc,s;
    
    char name[30];
    float amount;
    void get_data()
    {
        cout<<"enter the details ";
        cin>>s;
        cout<<"account number :";
        cin>>acc;  
        cin.ignore();
        cout<<" enter the name :";
        cin.getline(name,30);
        cout<<" enter amount in the account :";
        cin>>amount;
        cout<<"Chutiyap";
        cout<<";lavda";
    }

};
class saving : public A
{
    public:
    float bal;
    void set_data()
    {cout <<"enter the bal "<<endl;
      cin>>bal;
      if(bal<500)
      {
          cout<<"balance is insufficient "<<endl;
      }
      else
      {
          cout<<"savings account is created "<<endl;
      }
    }
};
class current : public A
{
    public:
    float bal;
    void get_set()
    {
        cout<<"enter the balance "<<endl;
        cin>>bal;
        if(bal<1000)
        {
            cout<<"insufficient balance "<<endl;
        }
        else
        {
            cout<<"current account is created "<<endl;
        }
    }

};
int main()
{
    int o;
    cout<<"1.saving account "<<endl;
    cout<<"2.current account "<<endl;
    cout<<"enter your option "<<endl;
    cin>>o;
    if(o==1)
    {
        saving a1;
        a1.get_data();
        a1.set_data();
    }
    else if(o==2)
    {
        current c1;
        c1.get_data();
        c1.get_set();
    }
    else
    {
        cout<<"invalid entry "<<endl;
    }
    return 0;
}