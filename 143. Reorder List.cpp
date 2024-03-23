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
    void reorderList(ListNode* head) {
        vector<int>data;
        ListNode* temp=head;
        while(temp!=NULL){
            data.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* dummy= new ListNode(-1);
        temp=dummy;
        int i=0,j=data.size()-1;
        while(i<=j){
            if(i!=j){
                 temp->next=new ListNode(data[i]);
            temp=temp->next;
            temp->next=new ListNode(data[j]);
            temp=temp->next;
            }else{
                temp->next=new ListNode(data[i]);
                i++;
            }
           
            i++;
            j--;

        }
        *head= *dummy->next;
    }
};
