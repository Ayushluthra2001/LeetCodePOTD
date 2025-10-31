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
        vector<int>data;
        ListNode* temp = head;
        while(temp!= NULL){
            data.push_back(temp->val);
            temp = temp->next;
        
        }
        
        unordered_map<int,int>mapping;
        for(auto i : nums) mapping[i]++;
        
        temp = new ListNode(-1);
        head = temp;
        for(auto i : data){
            if(mapping.find(i)== mapping.end()){
                temp->next = new ListNode(i);
                temp = temp->next;
            }
        }
        return head->next;
    }
};
