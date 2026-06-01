#include<iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
      int count = 0;
        while(n>0){
          n /= 10;
          count ++;
        }
        return count;
    }
};

int main(){
  Solution s;
  cout << s.countDigit(1);

  return 0;
}