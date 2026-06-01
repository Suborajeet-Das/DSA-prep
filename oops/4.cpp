#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void print(){
        cout << "Name = ";
        cout << name << endl;
        cout << "age = ";
        cout << age << endl;
        cout << "gender = ";
        cout << gender << endl;
    }

};

int main(){
    student arr[10];
    for(int i=0;i<3;i++){
        cout << "enter your name: ";
        cin  >> arr[i].name;
        cout << "enter your age: ";
        cin  >> arr[i].age;
        cout << "enter your gender: ";
        cin  >> arr[i].gender;
    }

    for(int i=0;i<3;i++){
        arr[i].print();
    }
    return 0;
}