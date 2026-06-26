#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
      int count = 0;
      int ans = 0;
      for(char c : s){
        if(c == '('){
          count++;
          ans = max(ans,count);
        }else if(c == ')'){
          count --;
        }
      }
      return ans;
    }
};

int main(){

  string s = "(1+(2*3)+((8)/4))+1";

  Solution a;
  cout << a.maxDepth(s);

  return 0;
}