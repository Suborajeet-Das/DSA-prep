#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word;

    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else if (!word.empty()) {
            words.push_back(word);
            word.clear();
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    string ans;
    for (int i = 0; i < words.size(); i++) {
        ans += words[i];
        if (i != words.size() - 1) {
            ans += " ";
        }
    }

    return ans;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Reversed words: " << reverseWords(s) << endl;

    return 0;
}