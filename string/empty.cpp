#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "abc";
    str.clear();

    if(str.empty()){
        cout << "the string is empty";
    }else{
        cout << "it is not empty";
    }
    return 0;
}