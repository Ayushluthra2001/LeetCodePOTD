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
int counter(ListNode* head){
    int count=0;
    ListNode* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int count=counter(head);
        if(count==1) return NULL;
        if(count==n) return head->next;

        int i=0;
        ListNode* temp=head;
       
        while(i<count-n-1){
            temp=temp->next;
            i++;
        }
        //cout<<temp->val<<endl;
        if(temp->next!=NULL)
        temp->next=temp->next->next;
        else temp->next=NULL;
        return head;
    }
};

