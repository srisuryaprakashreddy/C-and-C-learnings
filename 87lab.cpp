//pointer is a special variablen  whivh states of address of another variable
#include<iostream>
using namespace std;
#define MAX 10

class student 
{
    private:
    char name[30];
    char uid;
    int age;
  char address[40];
  void get_data()
  {
      cout<<"enter name ,UID,age and address "<<endl;
      cin>>name>>age>>uid>>address;

  }
  void display()
  {
      cout<<"name is "<<name<<"\n age is "<<age<<"\n uid is "<<uid<<"\n address is "<<address<<endl;
  }
};
int main()
{
    student *ptr;
    student p;
    ptr->&p;
    p.get_data();
    p.dispaly();
    return 0;
}