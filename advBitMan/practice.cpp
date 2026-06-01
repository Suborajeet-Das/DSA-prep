// find the two non-repeating elements in an array where every other element repeats twice
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = res ^ arr[i];
    }
    cout << res;

    /*int rightMostBit = res&-res;
    
    for(int i=0;i<n;i++){
        if(rightMostBit&res){
            a = res^rightMostBit;
        }
    }
    b = res^a;

    cout << a << " " << b;
    */
    int temp = res;
    int a=0;
    int b=0;
    for (int i = 0; i < n; i++)
    {
        if (temp & 1)
        {
          a = res^arr[i];
        }
    }

    b = a^res;

    cout << a << " " << b;

    return 0;
}