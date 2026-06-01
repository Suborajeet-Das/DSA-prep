//find the number in the array that is not repeated using exor, where the time complexity is O(n)
#include<iostream>
using namespace std;

int main(){
   cout << "enter the no. of element in an array: ";
   int n;
   cin  >> n;

   cout << "enter an array: ";
   int arr[n];
   for(int i=0;i<n;i++){
    cin >> arr[i];
   }
   
   int res = arr[0];
   for(int i=1;i<n;i++){
    res = res^arr[i];
   }
   cout << res;

   return 0;
}