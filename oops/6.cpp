#include<iostream>
using namespace std;

class rectangle{
    public: 

    int length;
    int breadth;

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r1;

    cout << "enter the length and breadth: ";
    cin  >> r1.length >> r1.breadth;

    cout << "area of rectangle: ";
    cout << r1.area() << endl;

    cout << "perimeter of rectangle: ";
    cout << r1.perimeter();

    return 0;

    
}