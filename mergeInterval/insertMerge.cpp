#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
          int newStart = newInterval[0];
          int newEnd = newInterval[1];
          vector<vector<int>> ans;

          for(int i=0; i<intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];

            if(newEnd < start){
              //if new interval is not overlapped
              ans.push_back({newStart, newEnd});
              newStart = start;
              newEnd = end;
            }else if(end < newStart){
              ans.push_back({start,end});
            }else {
              newStart = min(newStart, start);
              newEnd = max(newEnd, end);
            }
          }
          ans.push_back({newStart, newEnd});

          return ans;
    }
};

int main(){

  vector<vector<int>> intervals = {{1,2}, {3,5}, {6,7},{8,10},{12,16}};

  vector<int> newInterval = {4,8};

  Solution a;

  vector<vector<int>> res = a.insert(intervals, newInterval);

  for(int i=0; i<res.size(); i++){
    cout << res[i][0] << " " << res[i][1] << endl;

  }
  return 0;
}