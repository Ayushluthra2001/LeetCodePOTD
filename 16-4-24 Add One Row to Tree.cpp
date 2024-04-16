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
TreeNode* solve(TreeNode* root, int val,int depth, int currDepth){
   
    if(root==NULL){
         
        return NULL;
    }
    if(currDepth==depth-1){
       
        
        
        TreeNode* rootleft=root->left;
        
        TreeNode* rootright=root->right;
        
        
        root->left= new TreeNode(val);
         
        root->right=new TreeNode(val);
         
        
        root->left->left=rootleft;
        root->right->right=rootright;
        return root;
    }
    root->left=solve(root->left,val,depth,currDepth+1);
    root->right=solve(root->right,val,depth,currDepth+1);
    return root;
    
}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newroot=new TreeNode(val);
            newroot->left=root;
            return newroot;
        }
        return solve(root,val,depth,1);
    }
};
