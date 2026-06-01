#include<iostream>
using namespace std;

int mul(int n){
    if(n==1){
        return 1;
    }else{
        int prevMul = mul(n-1);
        return n*prevMul;
    }
}

int main(){
    int n;
    cin >> n;

    cout << mul(n);

    return 0;
}