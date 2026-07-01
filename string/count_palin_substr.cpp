#include<iostream>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;

        for(int i=0; i<s.size(); i++){
          //odd
          int l = i;
          int r = i;

          while(l>= 0 && r<s.size()){
            if(s[l] == s[r]){
              count ++;
              l--;
              r++;
            }else{
              break;
            }
          }

          //even
          l = i;
          r = i+1;

          while(l>= 0 && r<s.size()){
            if(s[l] == s[r]){
              count ++;
              l--;
              r++;
            }else{
              break;
            }
          }
        }
        return count;
    }
};

int main(){

  string s = "aaa";

  Solution a;
  cout << a.countSubstrings(s);
  return 0;
}