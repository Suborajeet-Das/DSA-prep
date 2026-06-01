#include<iostream>
using namespace std;

int bit(int n, int i);

int main(){
    cout << "enter a number: ";
    int n;
    cin  >> n;

    cout << "enter the i bit to be find: ";
    int i;
    cin  >> i;

    cout << bit;
    return 0;
}
int bit(int n, int i){
    return ((n&(1 << i))!= 0) ? 1 : 0;
}
