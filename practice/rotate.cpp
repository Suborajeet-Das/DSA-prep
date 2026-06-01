//rotate by 1
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,7,4,11,5,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int temp = arr[size-1];
    for(int i=size-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}