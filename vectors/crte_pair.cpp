//insert in pair
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int ,int>> v;
    v.push_back({1,2});
    v.emplace_back(3,4);

    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << " ";
    }
    return 0;
}