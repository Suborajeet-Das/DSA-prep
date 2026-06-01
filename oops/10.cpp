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
    rectangle *ptr = &r;
    cin >> ptr->length >> ptr->breadth;
    cout << ptr->area() << endl;
    cout << ptr->perimeter();

    return 0;
}