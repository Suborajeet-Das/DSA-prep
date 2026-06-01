//multiplication of numbers

// #include<iostream>
// using namespace std;

// int mul(int n){
//   if(n==0){
//     return 1;
//   }else{
//     return n*mul(n-1);
//   }
// }

// int main(){

//   cout << mul(3);

//   return 0;
// }

//mul of number using oops

#include<iostream>
using namespace std;

class Mul{
  public:
  int mul(int n){
    if(n==0){
      return 1;
    }else{
      return n*mul(n-1);
    }
  }
};

int main(){

  Mul m;
  
  cout << m.mul(3);

  return 0;
}