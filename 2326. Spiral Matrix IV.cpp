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
    vector<vector<int>> spiralMatrix(int n, int m , ListNode* head) {
        vector<vector<int>>ans(n , vector<int>(m , -1));


        ListNode* temp = head;
        int topRow = 0;
        int topCol = 0;
        int endCol = m-1;
        int endRow = n-1;
        while(temp != NULL){
            for(int i  = topCol; i<=endCol && temp!=NULL; i++){
                ans[topRow][i] = temp->val;
                temp = temp->next;
            }
            topRow++;
            for(int i = topRow; i<=endRow && temp !=NULL; i++){
                ans[i][endCol] = temp->val;
                temp = temp->next;
            }
            endCol--;
            for(int i = endCol; i>=topCol && temp!=NULL; i--){
                ans[endRow][i] = temp->val;
                 temp = temp->next;
            }
            endRow--;
            for(int i = endRow; i>=topRow && temp!= NULL;i--){
                ans[i][topCol] = temp->val;
                temp = temp->next;
            }
            topCol++;
        }

        return ans;
    }
};
