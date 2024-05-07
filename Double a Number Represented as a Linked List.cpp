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
ListNode* reverse(ListNode* temp){
    ListNode* curr=temp;
    ListNode* forward=temp;
    ListNode* prev=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
    ListNode* doubleIt(ListNode* head) {
        ListNode* dummy =new ListNode(-1);

        ListNode* temp=reverse(head);
        ListNode* temp2=temp;
        int carry=0;
        temp=dummy;
        while(temp2!=NULL || carry>0){
            int value=temp2!=NULL ? temp2->val*2 + carry : carry;
            int unitPlace=value%10;
            temp->next = new ListNode(unitPlace);
            if(temp2!=NULL)temp2=temp2->next;
            carry=value/10;
            temp=temp->next;
        }
        
        
        dummy=reverse(dummy->next);

    

        return dummy;
    }
};
