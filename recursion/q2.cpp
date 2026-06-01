//calculate n raised to the power of p
#include<iostream>
#include<cmath>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
    int power = pow(n,p-1);
    return n*power;
}

int main(){
    int n,p;
    cin >> n >> p;
    
    cout << power(n,p);

    return 0;
}