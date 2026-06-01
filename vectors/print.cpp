//printing values of a vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int value;
    for(int i=0;i<5;i++){
        cin >> value;
        v.emplace_back(value);
    }

    /*for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *(it) << " ";
    }
    */
   /*for(auto it =v.begin();it!=v.end();it++){
    cout << *(it) << " ";//auto assigns everything such as data type
   }
   */
  for(auto it : v){
    cout << it << " ";
  }
    return 0;
}