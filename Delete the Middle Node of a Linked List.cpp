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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return NULL;
        if(head->next->next == NULL){
            head->next = NULL;
            return head;
        }
        int count = 0;

        ListNode* temp = head;
        while(temp != NULL) {
            temp = temp->next;
            count++;
        }
        int mid = count/2;
        cout<<mid<<endl;
        temp = head;
        while(temp != NULL  && mid>1){
            mid--;
            temp = temp->next;
        }
        
        temp->next = temp->next->next;

        return head;
    }
};
