//student name,age and gender
#include<iostream>
#include<string>
using namespace std;

class student{ 
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout << "name = ";
        cout << name << endl;
        cout << "age = ";
        cout << age << endl;
        cout << "gender = ";
        cout << gender << endl;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        cout << "enter a name ";
        cin  >> arr[i].name;
        cout << "enter an age ";
        cin  >> arr[i].age;
        cout << "enter gender ";
        cin  >> arr[i].gender;
    }

    for(int i=0;i<3;i++){
         arr[i].printInfo();
    }

    return 0;
}