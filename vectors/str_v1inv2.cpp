//store v1 in v2
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1(5,10);
    vector<int> v2(v1);

    for(int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    return 0;
}