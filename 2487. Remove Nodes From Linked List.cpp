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
    ListNode* removeNodes(ListNode* head) {
        vector<int>data;

        ListNode* temp = head;
        while(temp != NULL){
            data.push_back( temp->val );
            temp = temp->next;
        }
        stack<int>st;
        vector<int>greaterToright(data.size(),-1);
       
        st.push(data[data.size()-1]);
        for(int i=data.size()-2; i>=0 ;i--){
            while(!st.empty() && data[i]>=st.top()) st.pop();

            if(!st.empty() ){
                greaterToright[i]=st.top();
            }
            st.push(data[i]);
        }
        ListNode* dummy = new ListNode(-1);
        temp=dummy;
        for(int i=0;i<greaterToright.size();i++){
            if(greaterToright[i]==-1){
                temp->next = new  ListNode(data[i]);
                temp = temp->next;
            }
        }
        return dummy->next;

    }
};
