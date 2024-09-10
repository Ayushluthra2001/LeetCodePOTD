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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans = new ListNode(-1);
        ListNode* temp = head;
        ListNode* temp2 = ans;


        while(temp != NULL ){
            int first = temp->val;
            int second = -1;
            if(temp->next!=NULL)
            second = temp->next->val;

            if(temp->next==NULL){
                temp2->next = new ListNode(first);

                return ans->next;
            }else{
                temp2->next = new ListNode(first);
                temp2= temp2->next;
                int x = __gcd(first,second);
                temp2 -> next = new ListNode(x);
                temp2 = temp2->next;
                temp = temp->next;
            }
        }

        

        return ans->next;
    }
};
