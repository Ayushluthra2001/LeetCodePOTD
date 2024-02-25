/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root==NULL) return NULL ;
    if(root->val==p->val || root->val==q->val) return root;
    TreeNode* left=solve(root->left,p,q);
    TreeNode* right=solve(root->right,p,q);
    if(left==NULL && right!=NULL) return right;
    if(left!=NULL && right!=NULL) return root;
    if(left!=NULL && right==NULL) return left;
    return NULL;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root,p,q);
    }
};
