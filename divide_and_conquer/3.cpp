#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key);

int main(){
    int arr[] = {23,1,5,43,76,45,87};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 43;
    int result = linearSearch(arr,size,key);

    (result==-1)
        ?cout << "element not found"
        :cout << "element found at index: " << result;

    return 0;
}
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}