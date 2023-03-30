// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room {

   public:
    double length;
    double breadth;
    double height;

    int calculateArea() {
        return length * breadth;
    }

    int calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length;
    room1.breadth;
    room1.height;
    cout<<"enter the values of l,b,h"<<endl;
    cin>>room1.length;
    cin>>room1.breadth;
    cin>>room1.height;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
