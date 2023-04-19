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
    int maxi=0;
    void solve(TreeNode* root, int dir, int Lpath){
        if(root==NULL) return ;
        maxi=max(maxi,Lpath);
        if(dir==0){
            solve(root->left,dir,1);
            solve(root->right,1,1+Lpath);
        }else {
            solve(root->right,1,1);
            solve(root->left,0,1+Lpath);
        }
        return ;
    }
    int longestZigZag(TreeNode* root) {
        solve(root->left,0,1);
        solve(root->right,1,1);
        return maxi;
    }
};
