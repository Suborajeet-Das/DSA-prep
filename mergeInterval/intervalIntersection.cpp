//986

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>>ans;
        int i=0, j=0;
        while(i<firstList.size() && j<secondList.size()){
            int start1 = firstList[i][0];
            int end1 = firstList[i][1];
            int start2 = secondList[j][0];
            int end2 = secondList[j][1];

            if(start2 < start1){
                swap(start1, start2);
                swap(end1, end2);
            }

            if(start2 <= end1){
                int newStart = max(start1, start2);
                int newEnd = min(end1, end2);
                ans.push_back({newStart, newEnd});
            }

            if(firstList[i][1] < secondList[j][1]){
                i++;
            }else{
                j++;
            }
        }

        return ans;
    }
};

int main(){

  Solution a;

  vector<vector<int>> firstList = {{0,2}, {5,10}, {12,23}};
  vector<vector<int>> secondList = {{1,2}, {5,5}, {14,25}};

  vector<vector<int>> res = a.intervalIntersection(firstList, secondList);

  
  return 0;
}