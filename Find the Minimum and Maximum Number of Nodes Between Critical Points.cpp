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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next ==NULL || head ->next->next ==NULL) return {-1,-1};
        vector<int>ans;

        ListNode* prev = head;
        ListNode* curr = head->next;
        int i =1;
        int currpos =1;
        int prevpos = 0;
        int first = 0;
        int mini = INT_MAX;

        while(curr->next != NULL){
            if((curr->val <prev->val && curr->val< curr->next->val) || curr->val>prev->val && curr->val>curr->next->val){
                if(prevpos == 0){
                    prevpos=i;
                    first =i;
                }else{
                    mini= min(mini, i-prevpos);
                    prevpos = i;
                }
            }
            i++;
            prev = curr;
             curr = curr->next;
        }
        if(mini==INT_MAX) return {-1,-1};
        return {mini,prevpos-first};
    }
};
