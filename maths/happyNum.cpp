//   A happy number is a number defined by the following process:

// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.

#include<iostream>
using namespace std;

class Solution {
public:
    int newNumber(int n){
        int sum = 0;
        while(n!=0){
            int rem = n%10;
            sum += pow(rem,2);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int, int>seen;

        while(n!=1){
            if(seen[n]){
                return false;
            }
            seen[n]++;
            n = newNumber(n);
        }
        return true;
    }
};

int main(){
  return 0;
}