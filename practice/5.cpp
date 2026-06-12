//reverse words in a string

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Rev{
  public:
  vector<string>v;
  string revWords(string s){
    string word = "";

    for(char c: s){
      if(c != ' '){
        word += c;
      }else if(c==' ' && (!word.empty())){
        v.push_back(word);
        word.clear();
      }
    }
    if(!word.empty()){
      v.push_back(word);
      word.clear();
    }

    reverse(v.begin(), v.end());

    string ans = "";

    for(int i=0; i<v.size(); i++){
      ans += v[i];
      if(i < v.size()-1) ans += " ";
    }

    return ans;

  }
};

int main(){
  string s = "the sky is blue";

  Rev a;

  cout << a.revWords(s);

  return 0;
}