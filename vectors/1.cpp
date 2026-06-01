#include<iostream>
#include<vector>
using namespace std;
void explainvector(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);

    cout << v[0] << " ";
    cout << v[1] << endl;

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

}

int main(){
    explainvector();
    return 0;
}
