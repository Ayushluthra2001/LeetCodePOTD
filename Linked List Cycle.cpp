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
    bool hasCycle(ListNode *head) {
      
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL && fast->next!=NULL) fast=fast->next;
            
            if(fast!=NULL && slow==fast) return true;
            slow=slow->next;
        }
        return false;
    }
};
