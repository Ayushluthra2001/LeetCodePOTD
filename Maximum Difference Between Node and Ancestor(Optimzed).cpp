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
int maxdistance=0;
    void solve(TreeNode* root, int maxi,int mini){
        if(root==NULL) return ;
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        solve(root->left,maxi,mini);
        solve(root->right,maxi,mini);
       
        maxdistance=max(maxdistance,abs(maxi-mini));
         
        
        return ;
    }
    int maxAncestorDiff(TreeNode* root) {
        
        int maxi=root->val,mini=root->val;
         solve(root,maxi,mini);
         return maxdistance;
    }
};
