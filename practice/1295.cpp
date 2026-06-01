#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count,ans=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            continue;
        }else{
        int n=nums[i];
         count=0;
        while(n!=0){
            n=n/10;
            count++;
        }
        if(count%2==0){
            ans++;
        }
        }
      }
      return ans;  
    }
};

int main(){
    Solution s;
    vector<int> nums={0};
    cout << s.findNumbers(nums);
    return 0;
}