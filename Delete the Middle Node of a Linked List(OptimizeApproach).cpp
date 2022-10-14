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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int mid=count/2;
        ListNode* node=new ListNode(-1);
        temp=node;
        ListNode* temp2=head;
        count=0;
        while(temp2!=NULL){
            if(count!=mid){
                temp->next=new ListNode(temp2->val);
                temp=temp->next;
            }
            count++;
            temp2=temp2->next;
        }
        return node->next;
    }
};
