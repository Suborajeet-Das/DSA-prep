//2 6 4 8 10 9 15
//return the min length required such that the array is sorted

#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:
  //use left to find initial start
  int left(vector<int> &nums){
    for(int i=0; i<nums.size()-1; i++){
      if(nums[i] > nums[i+1]) return i;
    }
    return -1;
  }
  //use right to find initial end
  int right(vector<int> &nums){
    for(int i=nums.size()-1; i>0; i--){
      if(nums[i] < nums[i-1]) return i;
    }
    return -1;
  }
  int minUnsortedSubarray(vector<int> &nums){
    int start = left(nums);
    int end = right(nums);
    int mini = nums[start];
    int maxi = nums[start];
    if(start==-1) return 0;
    //find min and max bw range(start, end)
    for(auto it: nums){
      mini = min(mini, it);
      maxi = max(maxi, it);
    }
    //loop 0->start compare min with values
    int l = 0;
    while(l <= start){
      if(nums[l] > mini) break;
      l++;
    }
    //loop last till end
    int r = nums.size()-1;
    while(r >= end){
      if(nums[r] < maxi) break;
      r--;
    }
    return r-l+1;
  }
};

int main(){

  vector<int> nums = {2, 6, 4, 8, 10, 9, 15};

  Solution a;

  cout << a.minUnsortedSubarray(nums);


  return 0;
}