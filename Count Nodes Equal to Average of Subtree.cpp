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
    pair<int,int> solve(TreeNode* root,int &count ){
        if(root==NULL) return{0,0};
        if(root->left==NULL && root->right==NULL){
            count++;
            
            return {root->val,1};
        }
        int sum=root->val;
        pair<int,int>left =solve(root->left,count);
        pair<int,int>right=solve(root->right,count);
        sum+=left.first;
        sum+=right.first;
        int avg=sum/(left.second+right.second+1);
        //cout<<root->val<<" "<<sum<<" "<<avg<<" "<<left.second+right.second+1<<endl;
        if(avg==root->val) count++;
        
        return {sum,left.second+right.second+1};
    }
public:
    
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        int countel=0;
        solve(root,count);
        return count;
    }
};
