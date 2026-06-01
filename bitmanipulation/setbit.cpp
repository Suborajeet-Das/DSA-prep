#include <iostream>
using namespace std;

int result(int n, int i);

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    int i;
    cout << "enter the ith bit to be set: ";
    cin >> i;

    cout << result(n, i);
}
int result(int n, int i)
{
    return (n | (1 << i));
}