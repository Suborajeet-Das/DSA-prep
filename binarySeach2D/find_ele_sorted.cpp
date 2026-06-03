//search in a 2D array or matrix in a sorted matrix

#include<iostream>
#include<vector>
using namespace std;

vector<int> binarySearch(vector<vector<int>> &matrix, int k){
  int n = matrix.size();
  int m = matrix[0].size();

  int low = 0;
  int high = n*m -1;

  while(low <= high){
    int mid = low + (high-low)/2;

    int row = mid/m;
    int col = mid%m;

    if(matrix[row][col] == k) return {row,col};
    else if(matrix[row][col] < k) low = mid+1;
    else high = mid-1;
  }
  return {-1,-1};

}

int main(){
  vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8,}, {9,10,11,12}, {13,14,15,16}};
  int k = 15;
  
  vector<int>ans = binarySearch(matrix, k);

  cout << ans[0] << " " << ans[1];


  return 0;
}
