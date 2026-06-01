#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int number;
    bool gender;

    void printInfo(){
        cout << "name = ";
        cout << name << endl;
        cout << "number = ";
        cout << number << endl;
        cout << "gender = ";
        cout << gender << endl;
    }
};

int main(){
    student arr[3];

    for(int i=0;i<3;i++){
        cout << "enter your name: ";
        cin  >> arr[i].name;
        cout << "enter you number: ";
        cin  >> arr[i].number;
        cout << "enter your gender: ";
        cin  >> arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }

    return 0;
}