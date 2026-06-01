#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        res ^= arr[i];
    }

    // Find the rightmost set bit of res
    int rightmostSetBit = res & -res;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightmostSetBit) {
            a ^= arr[i];
        } else {
            b ^= arr[i];
        }
    }

    cout << a << " " << b;

    return 0;
}