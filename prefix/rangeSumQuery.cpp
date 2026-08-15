//303. Range Sum Query - Immutable
#include<iostream>
#include<vector>
using namespace std;

class NumArray{
  public:
  vector<int> prefix;
  NumArray(vector<int>& nums){
    prefix.resize(nums.size());
    prefix[0] = nums[0];

    for(int i=1; i<nums.size(); i++){
      prefix[i] = nums[i]+prefix[i-1];
    }
  }

  int sumRange(int left, int right){
    if(left == 0) return prefix[right];
    return prefix[right] - prefix[left-1];
  }
};

int main(){
  vector<int> nums = {-2, 0, 3, -5, 2, -1};
  NumArray obj(nums);

  cout << obj.sumRange(0,2) << endl;
  cout << obj.sumRange(2,5) << endl;
  cout << obj.sumRange(0,5) << endl;


  return 0;

}