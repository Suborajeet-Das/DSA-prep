//23 = 2^2+3^2
#include<iostream>
#include<cmath>
using namespace std;

int count(int n){
    int count=0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

bool armstrong(int n,int d){
    int original=n,ans=0;
    while(n){
       int mod = n%10;
       n/=10;
       ans += pow(mod,d);
    }
    if(original == ans){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num;
    cin >> num;

    int digit = count(num);

    cout << armstrong(num,digit);

}