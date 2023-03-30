//dynamic memory allocation
#include<iostream>
using namespace std;
int main()
{
	int *ram;
	float *surya;
	 
	ram=new int;
	surya=new float;
	  
	  
    *ram =10;
    *surya=10.34;
     
     cout<<"values are "<<*ram <<"  "<<*surya<<endl;
    
    delete ram;
    delete surya;
    
    return 0;
}
