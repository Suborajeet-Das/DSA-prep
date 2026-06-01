#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}

int main(){
    vector<int> v1;
    int size;
    cout << "enter the size of the vector: ";
    cin  >> size;

    cout << "enter the values";
    int value;
    for(int i=0;i<size;i++){
        cin  >> value;
        v1.push_back(value);
    }
    display(v1);

    return 0;
}