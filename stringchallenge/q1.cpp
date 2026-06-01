// B a c D e F - make the string upper or lower case
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "dsajbahbbf";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        cout << s[i] << " ";
    }

    return 0;
}