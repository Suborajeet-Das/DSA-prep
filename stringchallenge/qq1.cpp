//make a string change its order
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s = "aHBbdukiY";

    for(int i=0;i<s.size();i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
            cout << s[i] << " ";
        }else{
            s[i] += 32;
            cout << s[i] << " ";
        }
    }
    return 0;
}