//data-hiding
#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l){
        if(l<=0){
            length=0;
        }else{
            length=l;
        }
    }
    void setBreadth(int b){
        if(b<=0){
            breadth=0;
        }else{
            breadth=b;
        }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r;
    
    cout << "enter the length and breadth: ";
    int l,b;
    cin  >> l >> b;

    r.setLength(l);
    r.setBreadth(b);

    cout << r.area() << endl;
    cout << r.perimeter();

    return 0;
}