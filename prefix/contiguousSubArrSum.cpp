#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len = 0;
        int sum = 0;
        unordered_map<int, int> mpp;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum%k == 0 && i+1>=2) return true;
            if(mpp.find(sum%k) != mpp.end()){
                len = i-mpp[sum%k];
                if(len>=2) return true;
            }else{
                mpp[sum%k] = i;
            }
        }
        return false;
    }
};

int main(){

  vector<int> nums={23,2,4,6,7};

  Solution a;

  cout << a.checkSubarraySum(nums, 100);
  return 0;
}