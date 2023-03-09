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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        unordered_map<ListNode*,ListNode*>mapping;
        ListNode* temp=head;
        while(temp!=NULL){
            
            if(mapping[temp]) return mapping[temp];
            else mapping[temp]=temp;
            temp=temp->next;
        }

        return NULL;
    }
};
