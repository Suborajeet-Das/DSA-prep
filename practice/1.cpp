#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter n: ";
    cin  >> n;
    int reverse=0;
    while(n!=0){
        int div=n%10;
        reverse=reverse*10+div;
        n=n/10;
    }
    cout << reverse;
    return 0;
}