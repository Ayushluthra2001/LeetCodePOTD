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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;
        if(k==0) return head;
        
        vector<int>data;
        ListNode *temp = head;
        while(temp != NULL){
            data.push_back(temp->val);
            temp = temp -> next;
        }
        k=k%data.size();
        vector<int>ans(data.size(),0);
        for(int i = 0; i<data.size(); i++){
            ans[i] = data[(data.size()+i-k)%data.size()];

        }

        temp = head;
        for(int i = 0; i<data.size(); i++){
            temp->val = ans[i];
            temp = temp->next;
        }

        return head;
    }
};
