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


    // finding LCA 
    TreeNode* findLCA(TreeNode* root ,int startValue,int destValue){
        if(root==NULL) return NULL;
        if(root->val==startValue || root->val==destValue) return root;

        TreeNode* left = findLCA(root->left,startValue,destValue);
        TreeNode* right = findLCA(root->right,startValue,destValue);
        if(left!=NULL && right!=NULL) return root;

        if(left!=NULL) return left;
        return right;
    }



    // finding path from LCA to Target
    bool solve(TreeNode* root, int value , string& ans ){
        if(root == NULL) return false;

        if(root->val==value){
            return true;
        } 
        ans.push_back('L');
        bool left = solve(root->left,value,ans);
        if(left) return left;
        ans.pop_back();
        
        
        ans.push_back('R');
        bool right = solve(root->right,value,ans);
        if(right) return right;
        ans.pop_back();
        return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {

        TreeNode* LCA           = findLCA(root,startValue,destValue);
        string lcaToSource      = "";
        string lcaToDestination = "";

        solve(LCA,startValue,lcaToSource);
        solve(LCA,destValue,lcaToDestination);


        //source to lca will always be u
        for(int i=0;i<lcaToSource.length();i++){
            lcaToSource[i]='U';
        }

        return lcaToSource+lcaToDestination;

    }
};
