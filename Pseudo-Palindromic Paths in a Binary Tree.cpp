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
void solve(TreeNode* root, unordered_map<int,int>mapping,int &ans){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        mapping[root->val]++;
        // cout<<root->val<<endl;
        // for(auto i : mapping){
            
        //     cout<<i.first<<" "<<i.second<<endl;
            
        // }
        // cout<<"Finsih"<<endl;
        
        int flag=false;

     for(auto i : mapping){
        if(i.second%2!=0) flag++;
    }
    
    if(flag==0 || flag==1) ans++;
    mapping[root->val]--;
    return ;
    }
    
    mapping[root->val]++;
    
   solve(root->left,mapping,ans);
   solve(root->right,mapping,ans);
    mapping[root->val]--;
    return ;
    


   
    
}
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int>mapping;
        int ans=0;
        solve(root,mapping,ans);
        return ans; 
    }
};
