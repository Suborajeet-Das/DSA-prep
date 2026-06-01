//convert small to capital letters
#include<iostream>
using namespace std;

char convert(char n){
    char ans = n-'a'+'A';
    return ans;
}

int main(){
    char name;
    cin >> name;

    cout << convert(name);

    return 0;
}