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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        

     
        ListNode* temp= head;
        int count = 0;
        while(temp!=NULL){
           count++;
            temp= temp->next;
        }
        int MNP = count / k;
        int rem = count % k;
        
        vector<ListNode*>ans;
        temp = head;
        
        while(temp != NULL){
            ListNode* temp2 = temp;
            int c = MNP;
           
            if(rem){
                c++;
                rem--;
            }
            ListNode* x = new ListNode(-1);
            ListNode* t  = x;
            while(temp2!=NULL && c--){
                t->next = new ListNode(temp2->val);
                t = t ->next;
                temp2 = temp2 ->next;
            }
            ans.push_back(x->next);
            temp = temp2;
        }
        int i = ans.size();

        while(i < k){
            ans.push_back(NULL);
            i++;
        }
        return ans;
        
    }
};
