#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {

public:
int romanToInt(string s) {
      unordered_map<char, int> cvrt;
      int ans = 0;

      cvrt['I'] = 1;
      cvrt['V'] = 5;
      cvrt['X'] = 10;
      cvrt['L'] = 50;
      cvrt['C'] = 100;
      cvrt['D'] = 500;
      cvrt['M'] = 1000;

      for(int i=0; i<s.size()-1; i++){
        if(cvrt[s[i]] < cvrt[s[i+1]]){
          ans -= cvrt[s[i]];
        }else{
          ans += cvrt[s[i]];
        }
      }
      ans += cvrt[s.back()];
      return ans;
        
    }
};

int main(){

  string s = "MCMXCIV";

  Solution a;

  cout << a.romanToInt(s);

  return 0;
}