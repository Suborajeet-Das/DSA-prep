//find the missing number from n-1 set of numbers of set n
#include<iostream>
using namespace std;

int missNum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum += arr[i];
    }
    int ans = n*(n+1)/2;

    return ans-sum;
}

int main(){
    //drivers code
    int arr[]={1,3,4,5,6};
    int n = 6;

    cout << missNum(arr,n);

    return 0;
}