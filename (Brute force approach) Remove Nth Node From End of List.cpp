class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>nodes;
        ListNode* temp=head;
        while(temp!=NULL){
            nodes.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* demo= new ListNode(-1);
        temp=demo;
        for(int i=0;i<nodes.size();i++){
            if(i!=nodes.size()-n){
                temp->next=new ListNode(nodes[i]);
                temp=temp->next;
            }
        }
        return demo->next;
    }
};
