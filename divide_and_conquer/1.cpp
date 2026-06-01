#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key);

int main(){
    int key = 23;
    int arr[] = {23,34,56,67,78,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr,size,key);
    (result==-1)
    ? cout << "element is not found in the array"
    : cout << "element is at index: " << result;
}
int binarySearch(int arr[],int size,int key){
    int low = 0, high = size-1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}