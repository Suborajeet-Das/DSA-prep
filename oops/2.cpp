#include<iostream>
#include<string>
using namespace std;

class student{
    public : 
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout << "name = ";
        cout << name;
        cout << "age = ";
        cout << age;
        cout << "gender = ";
        cout << gender;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        cout << "enter your name: ";
        cin  >> arr[i].name;
        cout << "enter your age: ";
        cin  >> arr[i].age;
        cout << "enter your gender: ";
        cin  >> arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}