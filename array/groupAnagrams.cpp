//group anagrams;

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
//brute force
    bool isAnagramBrute(vector<string>& strs,string s,string t);
    vector<vector<string>> groupAnagramsBrute(vector<string>& strs);
};

int main(){
  vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
  Solution a;

  vector<vector<string>> ans = a.groupAnagramsBrute(strs);

  for(auto it : ans){
    for(auto p : it){
      cout << p << " ";
    }
    cout << endl;
  }
  return 0;
}

bool Solution :: isAnagramBrute(vector<string>& strs,string s,string t){
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());
      return s==t;
    }

vector<vector<string>> Solution :: groupAnagramsBrute(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<bool> visited(n, false);
        for(int i=0; i<n; i++){
          if(!visited[i]){
            //add strs i in the group 
            vector<string> group = {strs[i]};
            for(int j=i+1; j<n; j++){
              if(isAnagramBrute(strs,strs[i], strs[j])){
                //add strs j in the group
                group.push_back(strs[j]);
                visited[j] = true;
              }
            }
            ans.push_back(group);
          }

        }
        return ans;
    }