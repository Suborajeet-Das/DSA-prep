//delete value
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.erase(v.begin()+1);//deletes vector
    //{30,23,10,20,30}
    v.erase(v.begin(),v.begin()+2);//{10,20,30}[start,end)
}