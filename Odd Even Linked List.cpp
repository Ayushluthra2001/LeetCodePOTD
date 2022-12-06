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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>el;
        ListNode* temp=head;
        while(temp!=NULL){
            el.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>el2;
        for(int i=0;i<el.size();i++){
            if(i%2==0) el2.push_back(el[i]);
        }
        for(int i=0;i<el.size();i++){
            if(i%2!=0) el2.push_back(el[i]);
        }
        ListNode* dummy=new ListNode(-1);
        temp=dummy;
        for(int i=0;i<el2.size();i++){
            temp->next=new ListNode(el2[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
};
