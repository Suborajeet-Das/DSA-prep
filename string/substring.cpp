#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "nincompoop";

    string s = s1.substr(3,9);
    cout << s;

    return 0;
}