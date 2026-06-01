//create a vector of fibonacci series using recurrsion

#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
  if(n<=1){
    return n;
  }else{
    return fib(n-1) + fib(n-2);
  }
}

vector<int> fibonacci_series(int n){
  vector<int> res;
  for(int i=0; i<n; i++){
    res.push_back(fib(i));
  }
  return res;
}

int main(){

  vector<int> ans = fibonacci_series(7);

  for(int num : ans){
    cout << num << " ";
  }
  return 0;
}