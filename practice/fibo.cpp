// 0 1 1 2 3 5 8 13
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "size of array: ";
    cin  >> n;

    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    //cout << arr[n-1]; for an index

    return 0;
}