#include<iostream>
using namespace std;

int clear(int n, int i){
    int mask = ~(1 << i);
    return (n&mask);
}

int main(){
    int n;
    cout << "enter n: ";
    cin  >> n;

    int i;
    cout << "enter the i: ";
    cin  >> i;
    
    cout << clear(n , i);

    return 0;
}