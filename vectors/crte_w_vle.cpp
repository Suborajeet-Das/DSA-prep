//create array with values
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5,100);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    vector<int> v1(5);

    return 0;
}