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
    int element;
    for(int i=0;i<4;i++){
        cout << "enter the element: ";
        cin  >> element;
        v1.push_back(element);
    }
    display(v1);

    return 0;
}