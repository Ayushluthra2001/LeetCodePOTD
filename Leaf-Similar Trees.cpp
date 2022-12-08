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
    void inorder(TreeNode * root, vector<int>&el){
        if(root==NULL) return ;
        inorder(root->left,el);
        if(root->left==NULL && root->right==NULL) el.push_back(root->val);
        inorder(root->right,el);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        inorder(root1,v1);
        inorder(root2,v2);
        if(v1.size()!=v2.size()) return false;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
};
