#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:

    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    int getArea(){
        return length*breadth;
    }
};

int main() {

    Rectangle rect(5, 10);


    cout << "Area of the rectangle: " << rect.getArea() << endl;

    return 0;
}
