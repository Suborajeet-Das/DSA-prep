#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int it: nums){
          freq[it]++;
        }

        vector<pair<int, int>> v;
        for(auto it : freq){
          v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(), [](pair<int, int>a, pair<int,int>b){
          return a.second > b.second;
        });

        vector<int> ans;

        for(int i=0; i<k; i++){
          ans.push_back(v[i].first);
        }

        return ans;
    }
};

int main(){
  vector<int> nums = {1,1,2,2,2,3};
  int k = 2;

  Solution a;

  vector<int> res = a.topKFrequent(nums, k);

  for(auto it: res){
    cout << it << " ";
  }


  return 0;
}