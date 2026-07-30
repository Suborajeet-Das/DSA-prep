/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        int c1=0, c2=0;

        while(c1!=2 && c2!=2){
            if(a==b) return a;

            a = a->next;
            b = b->next;

            if(!a){
                a = headB;
                c1++;
            }
            if(!b){
                b = headA;
                c2++;
            }
        }

        return nullptr;
    }
};