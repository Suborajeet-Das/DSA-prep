class Solution {
public:
    bool rotateString(string s, string goal) {
        string s1 = s+s;

        return s1.find(goal) != string::npos;
    }
};