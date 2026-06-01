#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int>:: iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();//point NOT at the end index but next to the end

    return 0;
}