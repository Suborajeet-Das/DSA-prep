#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str = "hudfldiufhliuwhiawejfokvaof";
    sort(str.begin(),str.end());
    cout << str;

    return 0;
}