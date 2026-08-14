// 525. Contiguous Array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int ans = -1;
        unordered_map<int,int> mpp;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) sum++;
            else sum--;

            if(sum == 0){
                ans = max(ans, i+1);
                continue;
            }

            if(mpp.find(sum) != mpp.end()){
                ans = max(ans, i-mpp[sum]);
            }else{
                mpp[sum] = i;
            }
            
        }
        return ans;
    }
};

int main(){
  Solution a;

  vector<int> nums = {0,1,1,1,1,1,0,0,0};

  cout << a.findMaxLength(nums);
  return 0;
}