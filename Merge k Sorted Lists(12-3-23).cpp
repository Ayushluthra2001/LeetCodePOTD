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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>a;
        for(int i=0;i<lists.size();i++){
            ListNode* temp=lists[i];
            while(temp!=NULL){
                a.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(a.begin(),a.end());
        ListNode* ans= new ListNode(-1);
        ListNode* temp=ans;
        for(int i=0;i<a.size();i++){
            temp->next=new ListNode(a[i]);
            temp=temp->next;
        }
        return ans->next;
        
    }
};
