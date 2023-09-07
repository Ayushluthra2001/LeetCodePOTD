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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>data;
        ListNode* temp=head;
        while(temp!=NULL){
          data.push_back(temp->val);
          temp=temp->next;
        }
        ListNode* dummy=new ListNode(-1);
        temp=dummy;
        left-=1;
        right-=1;
        while(left<=right){
          swap(data[left],data[right]);
          left++;
          right--;
        }
        temp=dummy;
        for(int i=0;i<data.size();i++){
          temp->next=new ListNode(data[i]);
          temp=temp->next;
        }
        return dummy->next;
    }
};
