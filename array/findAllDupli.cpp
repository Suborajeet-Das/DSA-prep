//442 find the duplicates in an array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int> ans;
        for(int i=0; i<nums.size(); i++){
          if(nums[abs(nums[i])-1] < 0){
            ans.push_back(abs(nums[i]));
          }else{
            nums[abs(nums[i])-1] *= -1;
          }
        }
        return ans;
    }
};

int main(){

  vector<int> nums = {4,-3,-2,-7,8,2,-3,-1};
  Solution a;
  vector<int>res = a.findDuplicates(nums);

  for(auto it: res){
    cout << it << " ";
  }
  return 0;
}