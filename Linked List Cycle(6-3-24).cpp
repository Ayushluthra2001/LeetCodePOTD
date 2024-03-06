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
        if(head==NULL ) return false;
        if(head->next==head) return true;
        ListNode* start=head;
        ListNode* fast=head->next;
        while(start!=NULL && fast!=NULL && start!=fast){
            start=start->next,fast=fast->next;
        
            if(fast!=NULL)fast=fast->next;
        }
        if(start==NULL || fast==NULL) return false;
        return true;
        
    }
};
