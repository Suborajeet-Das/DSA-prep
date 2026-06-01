#include<iostream>
#include<vector>
using namespace std;

class Solutions{
  public:
  int findkthpositive(vector<int> &arr, int k){
    vector<int> series;
    int curr = 1;
    for(int i=0; i<arr.size(); i++){
      while(curr < arr[i]){
        series.push_back(curr);
        curr++;
      }
      curr++;
    }

    while(series.size() < k){
      series.push_back(curr);
      curr++;
    }
    return series[k-1];
  }
};

int main(){
  vector <int>arr = {2,3,4,7,11};
  int k = 5;

  Solutions a;
  cout << a.findkthpositive(arr, k);

  return 0;

}