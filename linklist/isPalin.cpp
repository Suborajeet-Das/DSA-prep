#include<iostream>
#include<vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool func(vector<int>v){
        int i =0 ;
        int j = v.size()-1;

        while(i<j){
            if(v[i]!=v[j]){
                return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }

        return func(v);
    }
};