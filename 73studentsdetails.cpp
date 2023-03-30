 //WAP to create database of the following items: Name of the student (String), 
 //Roll number of the student (int), Height of the student (cm), Weight of the student (kg/gms)
 //1) Create a Constructor to initialize values
 //2) Create display () function to display the details
 //3) Illustrate the use of copy constructor
 #include<iostream>
 using namespace std;
 class student
 {
 	public:
 		char name[50];
		 int rollno,height,weight;
		 public:
 		student( char n[50],int r,int h,int w)
 		{
 			 name[50]=n[50];
			 
			 rollno=r;
			 height=h;
			 weight=w;
 		
 			
		 }
		 void display(void)
		 {
		 		cout<<"details \n"<<name<<"   "<<rollno<<"   "<<height<<"    "<<weight<< endl;
		 }
		 ~student();
 		
 	
 };
 student::~student()
 {
 	cout<<"object deleted ";
 }
 int main(){           student std("mohit",1234,6,78);                   //object creation
           student std1=std;
           std1.display();     
           return 0;

}
