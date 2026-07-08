//find the duplaicate in a given array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int> &nums) {
        int slow = nums[0];
        int fast = nums[0];

        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast){
                slow = nums[0];
                while(slow!=fast){
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return fast;
            }
        }
        return -1;
    }
};

int main(){

  vector<int> nums = {1,2,3,4,1};

  Solution a;

  cout << a.findDuplicate(nums);

  return 0;
}