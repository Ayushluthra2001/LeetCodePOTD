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
    void solve(TreeNode* root, unordered_map<int,int>&mapping){
        if(root==NULL) return ;
        solve(root->left,mapping);
        mapping[root->val]++;
        solve(root->right,mapping);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mapping;
       
        solve(root,mapping);
        vector<int>ans;
        int maxi=0;
        for(auto i : mapping){
            maxi=max(i.second,maxi);
            
        }
        for(auto i : mapping){
            if(i.second==maxi)ans.push_back(i.first);
        }
        return ans;
    }
};
