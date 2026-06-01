#include<iostream>
#include<vector>
using namespace std;

void vectors(){
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);

    vector<pair<int, int>>vec;
    vec.push_back({1,2});

    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    for(int i=0;i<vec.size();i++){
        cout << "(" << vec[i].first << "," << vec[i].second << ")";
    }
}

int main(){
    vectors();
    return 0;
}

