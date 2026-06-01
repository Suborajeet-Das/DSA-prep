#include<iostream>
using namespace std;

class student{
  string name,grade;
  int roll_num,age;

  public:
  void setname(string n){
    name = n;
  }

  void display(){
    cout << name;
  }
};

int main(){
  student s1;
  s1.setname("rohit");
  s1.display();

  return 0;

}