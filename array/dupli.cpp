#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicateMap(vector<int>& nums);
    bool containsDuplicateSort(vector<int>& nums);
    bool containsDuplicateSet(vector<int>& nums);
};

int main() {
    vector<int> nums = {1,2,3,1};

    Solution a;

    cout << a.containsDuplicateSet(nums);
    return 0;
}

// Approach 1: Hash Map
// TC: O(n) average
// SC: O(k), where k = distinct elements
bool Solution::containsDuplicateMap(vector<int>& nums) {
    unordered_map<int, int> mpp;

    for(auto it : nums) {
        if(mpp.find(it) != mpp.end()) {
            return true;
        }

        mpp[it]++;
    }
    return false;
}

// Approach 2: Sorting
// TC: O(n log n)
// SC: O(log n) typical due to sort recursion stack
bool Solution::containsDuplicateSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i - 1]) {
            return true;
        }
    }

    return false;
}

// Approach 3: Set
// TC: O(n log n)
// SC: O(k), where k = distinct elements
bool Solution::containsDuplicateSet(vector<int>& nums) {
    set<int> st;

    for(auto it : nums) {
        if(st.find(it) != st.end()) {
            return true;
        }

        st.insert(it);
    }

    return false;
}