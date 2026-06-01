//tree eert   aaaccbbb  aaabbbcc

#include<bits/stdc++.h>
using namespace std;

int main(){
  string s = "tree";

  unordered_map < char, int> freq;


  for(char c : s){
    cout << c <<endl;
    
    freq[c] ++;
  }

  for(auto it: freq){
    cout << freq[it.second];
  }


  return 0;
}