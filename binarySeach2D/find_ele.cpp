//search in a 2D array or matrix that is sorted row wise and col wise
#include<iostream>
#include<vector>
using namespace std;

vector<int> linearSearch(vector<vector<int>> &matrix, int k){
  for(int i=0; i<matrix.size(); i++){
    for(int j=0; j<matrix[0].size(); j++){
      if(matrix[i][j] == k){
        return {i,j};
      }
    }
  }
  return {-1,-1};
}

vector<int> binarySearch(vector<vector<int>> &matrix, int k){
  int r = 0, c = matrix[0].size() -1;

  while(r < matrix.size() && c >= 0){
    if(matrix[r][c] == k){
      return {r,c};
    }else if(matrix[r][c] < k){
      r++;
    }else{
      c--;
    }
  }
  return {-1, -1};
}

int main(){

  vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};

  int k = 9;

  //linear search
  //time complexity O(rows*columns);
  // vector<int> ans = linearSearch(matrix,k);
  // cout << ans[0] << " " << ans[1];

  //binary search 
  //time complexity O(rows+columns)
  vector<int> ans = binarySearch(matrix, k);
  cout << ans[0] << " " << ans[1]; 
  

  return 0;
}