//find number of bits to change to convert a to b.
#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "a: " << endl;
    cin  >> a;

    int b;
    cout << "b :" << endl;
    cin  >> b;

    int n = a^b;
    int count = 0;

    while(n!=0){
    n = n&(n-1);
    count++;
    }
    cout << count;

    return 0;
}