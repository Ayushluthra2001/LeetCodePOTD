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
    void solve(string temp,int &sum, TreeNode* root){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL){
            temp+=root->val+'0';
            sum+=stoi(temp);
            
            return ;
        }
        temp+=root->val+'0';
        solve(temp,sum,root->left);
        solve(temp,sum,root->right);

    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        string temp="";
        solve(temp,sum,root);
        return sum;
    }
};

