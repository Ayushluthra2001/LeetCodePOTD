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
    void solve(TreeNode* root, vector<int>&ans){
        if(root==NULL) return ;
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
       vector<int>ans;
        solve(root,ans);
        int start=0;
        int end=ans.size()-1;
        while(start<end){
            if(ans[start]+ans[end]==k) return true;
            else if(ans[start]+ans[end]>k) end--;
            else start++;
        }
        return false;
    }
};
