//form the biggest number from the numeric string
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s = "0897214612804498";

    sort(s.begin(),s.end(),greater<int>());

    cout << s;

    return 0;
}