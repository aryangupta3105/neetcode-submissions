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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }
        int value=size-n+1;
        int cnt=1;
        temp=head;
        ListNode* prev=NULL;
        
           
            if(value==1){
                return head->next;
            }
            while(temp){
                if(cnt==value){
                    prev->next=temp->next;
                    break;
                }
                prev=temp;
                cnt++;
                temp=temp->next;

            }
        
        return head;
    }
};
