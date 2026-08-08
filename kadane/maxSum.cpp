#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:

    int maxProduct(vector<int> v){
      int maxEnd = v[0];
      int minEnd = v[0];
      int ans = v[0];

      for(int i=1; i<v.size(); i++){
        int v1 = v[i];
        int v2 = minEnd*v[i];
        int v3 = maxEnd*v[i];

        maxEnd = max(v1, max(v2,v3)); 
        minEnd = min(v1, min(v2,v3)); 

        ans = max(ans, maxEnd);

      }

      return ans;
    }
};

int main(){

  vector<int> v = {-2,3,-4};

  Solution a;

  cout << a.maxProduct(v);

  return 0;
}