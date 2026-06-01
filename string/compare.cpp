#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "abc";
    string s2 = "abc";

    cout << s1.compare(s2) << endl;
    cout << s2.compare(s1) << endl;
    
    if(!s1.compare(s2)){
        cout << "it is equal";
    }else{
        cout << "it is not equal";
    }

    
        
    return 0;
}//zerodol-p