//739 Daily temperatures
//brute force
//temperatures = [73,74,75,71,69,72,76,73]
//ervry ith index search i+1<n to check if temp[i] < temp[j]
//tc O(n^2)
//SC O(1)
// int n = temperature.size();
// vector<int> ans(n, 0);
// for(i=0; i<n; i++){
//   for(j=i+1; j<n; j++){
//     if(temp[i] < temp[j]){
//       ans[i] = j-i;
//     }
//   }
// }

//optimise solution
//tc O(n)
//Sc O(n)
//ans = [1,1,4,2,1,1,0,0]
//array i have visted 73 74 75 71 69 72 76 73
//lifo stack 
// stack-> 73

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;
        st.push(0);

        for(int i=1; i<n; i++){
          while(!st.empty() && temperatures[i]>temperatures[st.top()]){
            ans[st.top()] = i-st.top();
            st.pop();
          }
          st.push(i);
        }
        return ans;
    }
};

int main(){
  Solution a;

  vector<int> temperatures = {73,74,75,71,69,72,76,73};

  vector<int>res = a.dailyTemperatures(temperatures);

  for(auto it : res){
    cout << it << " ";
  }
  
  return 0;
}