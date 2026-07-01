#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{	
	public:
		vector<char> frequencySort(string& s){

      unordered_map<char, int> freq;
      for(char c: s){
        freq[c]++;
      }

      vector<pair<char,int>> v;

      for(auto it : freq){
        v.push_back({it.first, it.second});
      }

      sort(v.begin(), v.end(), [](pair<char,int>a, pair<char,int>b){
        return a.second> b.second;
      } );

      vector<char> ans;

      for(auto it : v){
        ans.push_back(it.first);
      }

      return ans;
			
		}
};

int main(){
  string s = "tree";

  Solution a;

  vector<char> res =  a.frequencySort(s);

  for(auto it: res){
    cout << it << " ";
  }

  return 0;
}