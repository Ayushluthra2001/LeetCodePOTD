// This is an optimize solution of Remove Nth Node From End of List Time complexity is O(N) and space complexity is O(1) 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* demo = new ListNode(-1);
        ListNode* temp2;
        temp2 = demo;
        int counter=0;
        int total=0;
        while(temp != NULL){
            total++;
            temp = temp -> next;
        }
        temp=head;
        while(temp != NULL){
            if(counter != total-n){
                temp2->next=new ListNode(temp->val);
                temp2=temp2->next;
            }
            counter++;
            temp=temp->next;
        }
        return demo->next;
    }
};
