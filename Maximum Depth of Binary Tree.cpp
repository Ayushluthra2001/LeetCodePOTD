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
    void inorder(TreeNode* root, int level, int &maxi){
        if(root==NULL) return ;
        maxi=max(maxi,level);
        if(root->left)
            inorder(root->left,level+1,maxi);
        if(root->right)
            inorder(root->right,level+1,maxi);
    }
    int maxDepth(TreeNode* root) {
        int level=1;
        int maxi=0;
        inorder(root,level,maxi);
        return maxi;
    }
};
