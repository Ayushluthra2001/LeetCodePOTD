class Solution {
    private:
    bool hasSum(TreeNode* root, int targetSum){
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL){
            if(targetSum-root->val==0) return true;
            else return false;
        }   
        return (hasSum(root->left,targetSum-root->val) || hasSum(root->right,targetSum-root->val));
        
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
       return hasSum(root,targetSum);
    }
};
