// find the only non repeating element in an array where every other element repeats thrice
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array no : ";
    cin >> n;

    int arr[n];
    cout << "enter an array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int res = 0;
    for(int i=0;i<n;i++){
    res = arr[i];
    }

    return 0;
}