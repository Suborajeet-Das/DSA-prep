#include<iostream>
using namespace std;

class student{
  string name,grade;
  int roll_num,age;

  public:
  void info(string n,string g,int r,int a){
    name = n;
    grade = g;
    roll_num = r;
    age = a;
  }

  void display(){
    cout << name << " "<< grade << " " << roll_num << " " << age;
  }
};

int main(){
  student s1;
  s1.info("raj","a+",1,10);
  s1.display();

  return 0;
}