#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:

    string longestPalindrome(string s) {
      int currLen = 0;
      int maxLen = 0;
      string ans = "";
        for(int i=0; i<s.size(); i++){
          //odd
          int l = i;
          int r = i;
          while(l>=0 && r<s.size()){
            if(s[l] == s[r]){
              currLen = r-l+1;
              if(currLen > maxLen){
                maxLen = currLen;
                ans = s.substr(l, maxLen);
              }
            l--;
            r++;
            }else{ 
              break;
            }
          }
          l = i;
          r = i+1;

          //even
          while(l>=0 && r<s.size()){
            if(s[l] == s[r]){
              currLen = r-l+1;
              if(currLen > maxLen){
                maxLen = currLen;
                ans = s.substr(l, maxLen);
              }
              l--;
              r++;
            }else{
              break;
            }
          }
        }

        return ans;
    }
};

int main(){

  string s = "babad";

  Solution a;

  cout << a.longestPalindrome(s);

  return 0;
}