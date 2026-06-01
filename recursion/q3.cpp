//print names multiple times suing recursion

#include<iostream>
using namespace std;

void recur(int n){
  if(n==0){
    return;
  }else{
    recur(n-1);
    cout << ("subr0") << endl;
  }
}

int main(){

  recur(3);

  return 0;
}