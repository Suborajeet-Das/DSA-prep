#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
      string encoded_str = "";
      
      for(auto it : strs){
        string word = "";
        word += it;
        for(char& c : word){
          c = c+1;
        }
        word += ' ';
        encoded_str += word;
      }
      return encoded_str;
    }

    vector<string> decode(string s) {
      vector<string> decoded;
      string word = "";

      for(char c : s){
        if(c == ' '){
          decoded.push_back(word);
          word = "";
          continue;
        }
        c = c-1;
        word += c;
      }
      return decoded;
    }
};

int main(){
  Solution a;

  vector<string> strs = {"Hello","World"};
  string encoded = a.encode(strs);
  cout << encoded << endl;
  vector<string> decoded = a.decode(encoded);

  for(auto it : decoded){
    cout << it << " ";
  }
  
  return 0;
}