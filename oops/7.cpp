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

    cin >> r.length >>r.breadth;

    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}