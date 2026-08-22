//56. Merge Intervals

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
  public:
  vector<vector<int>> merge(vector<vector<int>> &nums){
    sort(nums.begin(), nums.end());
    int start1 = nums[0][0];
    int end1 = nums[0][1];

    vector<vector<int>> ans;

    for(int i=1; i<nums.size(); i++){
      int start2 = nums[i][0];
      int end2 = nums[i][1];

      if(end1 >= start2){
        end1 = max(end1, end2);
        continue;
      }
      ans.push_back({start1, end1});
      start1 = start2;
      end1 = end2;
    }
    ans.push_back({start1, end1});

    return ans;
  }
};

int main(){

  vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
  Solution a;

  vector<vector<int>> res = a.merge(intervals);

  for(int i=0; i<res.size(); i++){
    cout << res[i][0] << " " << res[i][1] << endl;
    
  }
  return 0;
}