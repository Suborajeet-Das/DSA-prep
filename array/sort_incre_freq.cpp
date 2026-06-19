#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
      unordered_map<int, int> freq;
        for(int it : nums){
          freq[it]++;
        }
        vector<pair<int, int>> v;

        for(auto it: freq){
          v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(), [](pair<int,int>a, pair<int,int>b){
          if(a.second == b.second){
            return a.first > b.first;
          }
          return a.second < b.second;
        });

        vector<int> ans;

        for(auto p : v){
          for(int i=0; i<p.second; i++){
            ans.push_back(p.first);
          }
        }

        return ans;
    }
};

int main(){

  vector<int> nums = {1,2,1,2,2,3};

  Solution a;

  vector<int> res = a.frequencySort(nums);

  for(int i=0; i<res.size(); i++){
    cout << res[i] << " " ;
  }

  return 0;
}