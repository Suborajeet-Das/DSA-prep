//find the largest odd in a string

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string largestOdd(string s){
      for(int i=s.size()-1; i>=1; i--){
        if((s[i]-'0')%2!=0){
          return s.substr(0, i+1);
        }
      }
      return "null";
    }
};

int main(){

  string s = "2406";

  Solution a;

  cout << a.largestOdd(s);

  return 0;
}