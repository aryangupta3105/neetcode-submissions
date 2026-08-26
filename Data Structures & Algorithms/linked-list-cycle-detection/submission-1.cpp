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
    bool hasCycle(ListNode* head) {
        set<int>s1;
        ListNode* fast=head;
        ListNode* slow=head;
        while(slow&& fast->next){
            slow=slow->next;
            fast=fast->next;
            if(fast->next)fast=fast->next;
            if(!fast->next)return false;
            if(slow==fast)return true;
        }
        return false;
    }
};
