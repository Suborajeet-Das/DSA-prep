#include<iostream>
using namespace std;

int rev(int arr[],int size){
    int i=0,j=size-1,temp=0;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    //driver's code
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    rev(arr,size);

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}