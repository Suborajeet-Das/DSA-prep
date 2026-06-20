#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
      unordered_map<string, int> freq;

      for(auto it : words){
        freq[it]++;
      }

      vector<pair<string, int>> v;

      for(auto it : freq){
        v.push_back({it.first, it.second});
      }

      sort(v.begin(), v.end(), [](pair<string, int>a, pair<string,int>b){
        if(a.second == b.second){
          return a.first < b.first;
        }
        return a.second > b.second;
      });

      vector<string> ans;

      for(int i=0; i<k; i++){
        ans.push_back(v[i].first);
      }

      return ans;
    }
};

int main(){

  vector<string> words = {"i","love","leetcode","i","love","coding"};
  int k = 4; 

  Solution a;

  vector<string>result = a.topKFrequent(words, k);

  for(auto it : result){
    cout << it << " ";
  }
  return 0;
}