//hashing for lowercase letters

#include<iostream>
using namespace std;

int main(){
  string s;
  cin >> s;

  int hash[26] = {0};

  for(int i = 0; i<s.size(); i++){
    hash[s[i] - 'a']++;
  }

  //number of queries
  int q;
  cin >> q;
  while(q--){
    char c;
    cin >> c;

    cout << hash[c - 'a'] << endl;
  }

  return 0;
}