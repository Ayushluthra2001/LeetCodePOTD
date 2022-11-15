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
    void solve(int &count,TreeNode* root){
        if(root==NULL) return ;
        solve(count,root->left);
        count++;
        solve(count,root->right);
    }
    int countNodes(TreeNode* root) {
        int count=0;
        solve(count,root);
        return count;
    }
};
