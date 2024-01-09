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
void solve(vector<int>&temp, TreeNode* root){
    if(root==NULL)return ;
    solve(temp,root->left);
    if(root->left==NULL && root->right==NULL){
        temp.push_back(root->val);
    }
    solve(temp,root->right);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf1,leaf2;
        solve(leaf1,root1);
        solve(leaf2,root2);
        if(leaf1.size()!=leaf2.size()) return false;
        for(int i=0;i<leaf1.size();i++){
            if(leaf1[i]!=leaf2[i])return false;
        }
        return true;
    }
};
