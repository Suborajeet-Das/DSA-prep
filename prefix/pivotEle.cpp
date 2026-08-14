#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total = 0;
        int left = 0;

        for(auto x: nums){
            total += x;
        }

        for(int i=0; i<nums.size(); i++){
            int right = total - nums[i] - left;
            if(right == left) return i;
            left += nums[i];
        }

        return -1;
    }
};

int main(){
  vector<int> nums={1,2,3,100,4,2};

  Solution a;

  cout << a.pivotIndex(nums);

  return 0;
}