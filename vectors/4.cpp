#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v1;
    int element;
    cout << "enter the size of the vector: ";
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "enter the element " << i << ":";
        cin >> element;
        v1.push_back(element);
    }
    display(v1);
    vector<int>::iterator it = v1.begin();
    v1.insert(it,566);
    display(v1);

    return 0;
}