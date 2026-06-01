// mapping map<datatype, datatype> first is key & second is frequency

#include<iostream>
#include<map>
using namespace std;

int main(){

  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n;i++){
    cin >> arr[i];
  }

  map <int,int> mpp;
  for(int i=0;i<n;i++){
    mpp[arr[i]]++;
  }

  int q;
  cin >> q;

  while(q--){
    int c;
    cin >> c;
    cout << mpp[c] << endl;
  }


  return 0;
}