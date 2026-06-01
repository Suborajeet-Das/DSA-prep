#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int n){

  int low=0,high=n-1,mid=0;

  while(low<=high){
    mid = low+(high-low)/2;

    if(arr[mid]==key){
      return mid;
    }else if(arr[mid]<key){
      low = mid+1;
    }else{
      high = mid-1;
    }
  }
  return -1;
}

int main(){

  cout << "enter the number of elements in the array: ";
  int n;
  cin  >> n;

  cout << "enter the array: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin  >> arr[i];
  }

  cout << "enter the key elements: ";
  int key;
  cin  >> key;

  cout << binarySearch(arr,key,n);

  return 0;
}