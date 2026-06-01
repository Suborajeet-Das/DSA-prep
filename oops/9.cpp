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
    rectangle r;

    cout << "enter l and b: ";
    cin  >> r.length >> r.breadth;


    cout << r.area() << endl;
    cout << r.perimeter();

    return 0;  
}