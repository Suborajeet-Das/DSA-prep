#include<iostream>
#include<string>

using namespace std;

int main(){
   string s1 = "somnam";
   string s2 = "bulist";
   int a = 3;
   
   s1.append(s2);
   cout << s1;
   cout << a;
   return 0;
}
