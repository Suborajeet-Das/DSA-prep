#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

string sortByFreq(string s){
  string ans = "";
  //use has map to store frequency
  unordered_map<char, int> freq;
  for(char c : s){
    freq[c]++;
  }

  vector<pair<char, int>> v;

  //store char with freq in the vector as pairs
  for(auto it : freq){
    v.push_back({it.first, it.second});
  }

  // sort vector pairs based on freq value
  sort(v.begin(), v.end(), [](pair<char,int>a, pair<char,int>b){
    return a.second > b.second;
  });

  //add to the answer

  for(auto p: v){
    for(int i=0; i<p.second; i++){
      ans += p.first;
    }
  }

  return ans;
}

int main(){

  string s = "tree";

  cout << sortByFreq(s);

  return 0;
}