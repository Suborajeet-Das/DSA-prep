#include<bits/stdc++.h>
using namespace std;

void MergeSort(int nums[], int low, int high);

void Merge(int nums[], int low, int mid, int high);


int main(){

  int nums[] = {7,4,1,5,3};
  int n = sizeof(nums)/sizeof(nums[0]);
  int low = 0, high = n-1;

  MergeSort(nums, low, high);

  for(int i=0;i<n;i++){
    cout << nums[i] << " ";
  }

  return 0;


}

void MergeSort(int nums[], int low, int high){
  if(low >= high) return ;

  int mid = (low+high)/2;

  MergeSort(nums, low, mid);
  MergeSort(nums, mid+1, high);
  Merge(nums, low, mid, high);
}

void Merge(int nums[], int low, int mid, int high){
  int left = low;
  int right = mid+1;

  vector <int> temp;

  while(left <= mid  &&  right <= high){
    if(nums[left] < nums[right]){
      temp.push_back(nums[left]);
      left ++;
    }else{
      temp.push_back(nums[right]);
      right++;
    }
  }
  while(left <= mid){
    temp.push_back(nums[left]);
    left++;
  }

  while(right <= high){
    temp.push_back(nums[right]);
    right++;
  }

  for(int i=0; i<temp.size(); i++){
    nums[i] = temp[i-low];
  }

}
