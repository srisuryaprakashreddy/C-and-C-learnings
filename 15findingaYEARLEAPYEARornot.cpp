//finding a year is leap year or not
//logic used the year which is perfectly divisible by 400 is leapyear
//if the year is perfectly divisible by 100 without perfectlyt divisible by 400 is a non-leap year
//if the year not even divisible by both 100 and 400 if it is perfectly divisible 4 then it is a leap year
//other all years are non -leap years
#include<iostream>
using namespace std;
int main()
{int year;
cout<<"enter the year you want to find it is leap year or not"<<"\n";
cin>>year;
if(year%400==0)
  cout<<year<<"  it is a leap year";
else if(year%100==0)
   cout<<year<"   is not a leap year";
else if(year%4==0)
cout<<year<<"   is a leap year";
else
 cout<<year<<"  the year you have entered is not a leap year";
return 0;

}

