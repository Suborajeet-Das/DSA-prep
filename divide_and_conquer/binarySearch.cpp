#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int l=0,h=size-1;
    

    while(l<=h){
        int m = (l+h)/2;
        if(arr[m]==key){
            return m;
        }
        if(arr[m]<key){
            l = m+1;
        }else{
            h = m-1;
        }
    }
    return -1;
}

int main(){
    int key=90;
    int arr[]={12,34,56,78,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr,size,key);
    if(result==-1){
        cout << "element is not found";
    }else{
        cout << "element at index: " << result;
    }
    return 0;
}
