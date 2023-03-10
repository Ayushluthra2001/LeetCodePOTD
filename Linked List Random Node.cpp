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
    vector<int>nodes;
    Solution(ListNode* head) {
        ListNode* t=head;
        int count=0;
        while(t!=NULL){
            nodes.push_back(t->val);
            t=t->next;
        }
    }
    
    int getRandom() {
        int r=rand()%nodes.size();
        // cout<<r<<endl;
        return nodes[r];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
