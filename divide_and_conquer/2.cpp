#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key);

int main(){
    int arr[] = {23,1,4,45,34,5,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;

    int result = linearSearch(arr,size,key);

    (result==-1)
    ? cout << "element not found"
    : cout << "element found : " << result;
}
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}