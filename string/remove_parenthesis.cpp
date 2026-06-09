//remove the outermost parenthesis

#include<iostream>
using namespace std;

int main(){

  //given string
  string s = "(()())(())";
  string ans = "";

  int flag = 0;
  
  for(char c : s){
    //check if open or closed
    if(c == '('){
      //if greater than zero than not an outer parenthesis
      if(flag > 0){
        ans += c;
      }
      //increment 
      flag++;
    }else{
      //decrement for close parenthesis
      flag--;
      //if after decrement still greater than zero than it is not a outer parenthesis
      if(flag > 0){
        ans += c;
      }
    }
  }
  cout << ans;

  return 0;

}