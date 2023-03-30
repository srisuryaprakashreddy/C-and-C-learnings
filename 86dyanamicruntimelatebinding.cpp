#include<iostream>
using namespace std;
class base
{
    public:
  virtual void show()
    {
        cout<<"base function invoked"<<endl;
    }
};
class child:public base
{
    public:
    void show()
    {
        cout<<"child class function is called"<<endl;
    }
};
int main()
{
    base *ptr;
    child obj1;
    ptr=&obj1;
    ptr->show();
    return 0;
}