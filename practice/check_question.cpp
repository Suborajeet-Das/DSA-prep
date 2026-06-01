#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1 = "CAR";
  string s2 = "Acr";

  transform(s1.begin(),s1.end(),s1.begin(),:: tolower);
  transform(s2.begin(),s2.end(),s2.begin(),:: tolower);

  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());

  cout << (s1 == s2);
  //1 means copied
  //0 means not copied
  
  return 0;
}