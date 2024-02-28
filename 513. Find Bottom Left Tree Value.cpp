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
void solve(TreeNode*root,int &leftmost,int &height ,int curr){
    if(root==NULL) return;
    solve(root->left,leftmost,height,curr+1);
    if(curr>height){
        height=curr;
        leftmost=root->val;
    }
    solve(root->right,leftmost,height,curr+1);
    
}
    int findBottomLeftValue(TreeNode* root) {
        int leftmost=root->val;
        int height=0;
        
        solve(root,leftmost,height,0);
        return leftmost;
    }
};
