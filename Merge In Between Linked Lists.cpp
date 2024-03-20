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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode* curr=list1;
        while(count<a-1){
            curr=curr->next;
            count++;
        }
        ListNode* temp=curr;
        ListNode* temp2=curr;
        while(count<=b){
            temp2=temp2->next;
            count++;
        }
        ListNode* temp3=list2;
        temp->next=NULL;
        while(temp3!=NULL){
            temp->next=new ListNode(temp3->val);
            temp=temp->next;
            temp3=temp3->next;
        }
        temp->next=temp2;
        return list1;
    }
};
