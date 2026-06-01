#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "avwieuhjjhlkghhphhhf";

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';     // Initialize ans to 'a' since it's the first letter
    int maxF = freq[0]; // Initialize maxF to the frequency of 'a'

    for (int i = 1; i < 26; i++)
    { // Start from index 1 as we've already initialized maxF with freq[0]
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = 'a' + i; // Update ans to the corresponding letter
        }
    }
    cout << ans << endl;
    cout << maxF;
    return 0;
}
