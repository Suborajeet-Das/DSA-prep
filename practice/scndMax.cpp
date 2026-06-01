//find the second maximum number in the array
#include<iostream>
#include<climits>
#include<algorithm> 
using namespace std;

int secondMax(int arr[],int size,int maxi){
    int second = INT_MIN;//can use -1 if time constraints 1<n<10^5
    for(int i=0;i<size;i++){
        if(arr[i]!=maxi){
            second = max(arr[i],second);
        }
    }
    return second;
}

int main(){
    int arr[]={34,23,5,2,357,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int maxi = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }

    cout << secondMax(arr,size,maxi);

    return 0;

}