#include<iostream>
using namespace std;

class Student{
  public: 

  string name;
  int age,roll_number;
  string grade;
};

int main(){
  Student s1;
  s1.name = "rohit";
  s1.age = 10;
  s1.roll_number = 1;
  s1.grade = "A";
  
  Student s2;
  s2.name = "rohit";
  s2.age = 10;
  s2.roll_number = 1;
  s2.grade = "A";

  
  
  return 0;
}