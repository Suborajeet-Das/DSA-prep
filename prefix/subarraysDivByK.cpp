#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int ans = 0;
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            int rem = ((sum % k) + k) % k;
            if(mpp.find(rem) != mpp.end()){
                ans += mpp[rem];
            }
            mpp[rem]++;
        }
        return ans;
    }
};

int main(){
  vector<int> nums = {4,5,0,-2,-3,1};
  int k = 5;

  Solution a;

  cout << a.subarraysDivByK(nums, k);

  return 0;
}

