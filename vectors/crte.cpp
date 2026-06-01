#include<iostream>
#include<vector>
using namespace std;

int main(){
    //insert with push and emplace
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 0;
}