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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mapping;
        for(auto i : nums){
            mapping[i]++;
        }
        ListNode* temp = head;
        ListNode* ans = new ListNode(-1);
        ListNode* temp2 = ans;
        while(temp!=NULL){
            if(mapping.find(temp->val)==mapping.end()) {
                temp2->next = new ListNode(temp->val);
                temp2 = temp2->next;
                temp=temp->next;
            }else{
                    temp=temp->next;
            }   
        }

        return ans->next;
    }
};
