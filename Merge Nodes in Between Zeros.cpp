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
        ListNode* result  = new ListNode(-1);
        vector<int> data;
        ListNode* node = head;
        ListNode* temp = result;
        while(node != NULL){
            data.push_back(node -> val);
            node = node -> next;
        }
        
        int i = 0;
        while(i < data.size()){
            if(data[i] == 0){
                int sum = 0;
                i = i + 1 ;
                while(i < data.size() && data[i] != 0){
                    sum += data[i];
                    i++;
                }
                if(i == data.size() ) {
                    if(data[i - 1] != 0) return result -> next;
                    else{
                        
                        return result -> next;
                    }
                }
                else if(data[i] == 0){
                    temp -> next = new ListNode(sum);
                   
                    temp = temp ->next;
                }
            }else i++;
        }
        return result -> next;
    }
};
