#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void print(){
        cout << "name: ";
        cout << name << endl;
        cout << "age: ";
        cout << age << endl;
        cout << "gender: ";
        cout << gender << endl;
    }
};

int main(){
    int n;
    cout << "enter the number of students: ";
    cin  >> n;

    student arr[n];
    for(int i=0;i<n;i++){
        cout << "enter the name: ";
        cin  >> arr[i].name;
        cout << "enter the age: ";
        cin  >> arr[i].age;
        cout << "enter the gender: ";
        cin  >> arr[i].gender;
    }

    for(int i=0;i<n;i++){
        arr[i].print();
    }
    return 0;

}