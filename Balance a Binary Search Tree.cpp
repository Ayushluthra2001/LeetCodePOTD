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
    TreeNode* createBinaryTree(vector<int>& data , int start , int end){
        if(start>end) return NULL;
        int mid = start + (end - start) /2;

        TreeNode* root = new TreeNode(data[mid]);
        root -> left = createBinaryTree(data, start , mid-1);
        root -> right = createBinaryTree(data, mid+1 , end);
        return root;
    }
    void inorder(vector<int>& data, TreeNode* root){
        if(root == NULL ) return ;
        inorder(data,  root -> left);
        data.push_back(root -> val);
        inorder(data , root -> right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> data;
        inorder(data,root);


        return createBinaryTree(data,0,data.size()-1);

    }
};
