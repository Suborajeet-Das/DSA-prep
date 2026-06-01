#include<iostream>
#include<vector>
using namespace std;

class Solutions{
  public:
  bool canSplit(vector<int> &nums, int largest, int k){
    int curSum = 0;
    int count = 1;
    for(int i=0; i<nums.size(); i++){
      curSum += nums[i];
      if(curSum > largest){
        curSum = nums[i];
        count ++;
      }
    }
    return (count <= k);
  }
  int splitArray(vector<int> &nums, int k){
    int low = nums[0];//the largest ele meaning the min nswer possible
    int high = nums[0];// the sum of all ele the max ans possible
    int mid;
    for(int i=1; i<nums.size(); i++){
      low = max(low, nums[i]);
      high +=nums[i];
    }

    while(low<=high){
      mid = low + (high-low)/2;

      if(canSplit(nums, mid, k)){
        high = mid-1;//find even smaller ans;
      }else{
        low = mid+1;//not posiible then try to find another answer;
      }
    }
    return low;
  }
};

int main(){
  vector<int> nums = {7,2,5,10,8};
  int k = 2;

  Solutions a;

  int ans = a.splitArray(nums, k);

  cout << ans;

  return 0;
}