class Solution {
public:
    void hasSum(TreeNode* root, int targetSum,vector<int>&path,vector<vector<int> >&ans){
        if(root==NULL) return ;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(targetSum-root->val==0) {
                ans.push_back(path);
            }
        }
        hasSum(root->left,targetSum-root->val,path,ans);
        hasSum(root->right,targetSum-root->val,path,ans);
       path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int> > ans;
        vector<int> path;
        hasSum(root,targetSum,path,ans);
        return ans;
    }
};
