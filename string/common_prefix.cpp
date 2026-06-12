#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i=0; i<strs[0].size(); i++){
            char c = strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(i > strs[j].size() || c != strs[j][i]){
                    return ans;
                }
            }
            ans += c;
        }
        return ans;
    }
};

int main(){
  vector<string> strs = {"hello", "hell", "hellboy"};

  Solution a = Solution();

  string ans = a.longestCommonPrefix(strs);

  cout << ans;

  return 0;

}