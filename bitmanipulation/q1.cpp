#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a: ";
    int a;
    cin >> a;

    cout << "Enter b: ";
    int b;
    cin >> b;

    int n = a ^ b;

    int count = 0;

    // Count the number of set bits in n
    while (n != 0)
    {
        // Increment count if the least significant bit is set
        count += n & 1;

        // Shift n to the right by 1 bit
        n >>= 1;
    }

    cout << "Number of bits to change: " << count << endl;

    return 0;
}
