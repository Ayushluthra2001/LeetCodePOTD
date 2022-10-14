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
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int mid=ans.size()/2;
        ListNode* node=new ListNode(-1);
        temp=node;
        for(int i=0;i<ans.size();i++){
            if(i!=mid){
                temp->next=new ListNode(ans[i]);
                temp=temp->next;
            }
            
        }
        return node->next;
    }
};
