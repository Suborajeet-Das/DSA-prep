//80

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3) return nums.size();
        int j = 2;
        for(int i=2; i<nums.size(); i++){
            if(nums[i] != nums[j-2]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(){
  vector<int> nums = {0,0,1,1,1,1,2,3,3};
  Solution b;
  int k = b.removeDuplicates(nums);

  cout << k << endl;

  for(int i=0; i<k; i++){
    cout <<  nums[i] << " ";
  }

  return 0;
}