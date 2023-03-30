//write a program to guess the area of triangle ,circle,rectangle,using function overlaoding program 
//should be menu- driven
#include <iostream>
using namespace std;
int demo (int x, int y)
{
	return 0.5*x*y;
}
float demo (float r)
{
	return 3.14*r*r;
}
int demo ( double m,double n)
{
return m*n;
}
int main()
{
	 int o,a,b;
     float c,d,e;
    cout<<"1.area of triangle "<<endl;
    cout<<"2.area of circle "<<endl;
    cout<<"3.area of rectangle "<<endl;
    cout<<"enter your option "<<endl;
    cin>>o;
   switch(o)
		{
			case 1:
				cout<<"enter height and base "<<endl;
                cin>>a>>b;
                cout<<"area is "<< demo(a,b)<<endl;
                break;
			case 2:
				cout<<"enter radius "<<endl;
                cin>>c;
                cout<<"area is "<< demo(c)<<endl;

				break;	
			case 3:
				cout<<"enter length and breadth "<<endl;
                cin>>d>>e;
                 cout<<"area is "<< demo(d,e)<<endl;


				break;
			
			default:
			    cout<<"u have entered a wrong option";
			    break;
								
		}
	return 0;	

}
