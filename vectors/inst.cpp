#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+2,2,200);//{300,100,200,200,100}
    
}