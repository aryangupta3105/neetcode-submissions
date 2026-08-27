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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL&& list2==NULL)return NULL;
        vector<int>ans;
        ListNode* temp=list1;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        ListNode* temp1=new ListNode (ans[0]);
        ListNode* head=temp1;
        for(int i=1;i<n;i++){
            ListNode* nn=new ListNode (ans[i]);
            temp1->next=nn;
            temp1=nn;
        }
        return head;
    }
};
