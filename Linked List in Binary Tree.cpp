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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(ListNode* head , TreeNode* root)
    {
        if(head==NULL) return true;
        
        if(root==NULL && head==NULL) return true; 
        
        if(root==NULL) return false;
        if(root->val != head->val) return false;
        // if(head->val==6) {
        //     // cout<<"Last Point"<<head->val<<endl;
        //     // if(head->next==NULL) cout<<"YESNULL"<<endl;
        //     cout<<root->val<<" "<<head->val<<endl;
        // }
        if(head->next==NULL && root->val == head->val ){
           // cout<<"YES"<<endl;
            return true;
        }
        
        

        bool left = solve(head->next , root->left);
        bool right= solve(head->next , root->right);
        
        return left || right;
    }
    
    bool getNode(ListNode* head , TreeNode* root , bool &ans){
        if(root==NULL) return false;
        if(root->val == head->val){
              if(solve(head , root)) ans = true;
        }
        bool left = getNode(head, root->left,ans);
        bool right = getNode(head, root->right,ans);

        return left || right;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
       
    
        bool ans = false;
         getNode(head, root,ans);
        return ans;
    }
};
