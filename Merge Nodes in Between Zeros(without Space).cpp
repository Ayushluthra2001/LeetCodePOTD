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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* result = new ListNode(-1);
        ListNode* temp  = head;
        ListNode* temp2 = result;

        
        while(temp != NULL){
            if(temp -> val ==0){
                int sum =0;
                temp = temp ->next;
                while(temp!=NULL && temp->val != 0){
                    sum += temp -> val;
                    temp = temp ->next;
                }
                if(temp == NULL) return result ->next;
                else if(temp!=NULL && temp->val==0 ){
                    temp2 -> next = new ListNode(sum);
                    temp2 = temp2 ->next;
                    

                }else{
                    return result -> next;
                }

            }else{
                temp = temp ->next;
            }
        }

        return result ->next;
        
    }
};
