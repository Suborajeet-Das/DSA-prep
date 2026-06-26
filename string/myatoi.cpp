#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
      int i = 0;
      int ans = 0;
      int sign = 1;

      while(s[i] == ' ' && i<s.size()){
        i++;
      }
      if(s[i] == '+' && i<s.size()){
        sign = 1;
        i++;
      }else if(s[i] == '-' && i<s.size()){
        sign = -1;
        i++;
      }

      while(i < s.size()){
        int digit = s[i]-'0';
        if(0 <= digit && digit <= 9){
          if (ans > INT_MAX / 10 ||
                    (ans == INT_MAX / 10 && digit > 7)) {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
          ans = ans*10 + digit;
          i++;
        }else{
          return ans*sign;
        }
      }
      

      return ans*sign;
    }
};

int main(){
  int i=0;
  int ans = 0;
  int sign = 1;

  string s = " -042";

  Solution a;

  cout << a.myAtoi(s);

  return 0;
}