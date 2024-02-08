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
void solve(TreeNode* root, int &p1, int &p2,int currlevel,int &l1,int &l2,int x,int y,int p){
    if(root==NULL ) return ;
    if(root->val==x){
        p1=p;
        l1=currlevel;
    }
    if(root->val==y){
        p2=p;
        l2=currlevel;
    }
    solve(root->left,p1,p2,currlevel+1,l1,l2,x,y,root->val);
    solve(root->right,p1,p2,currlevel+1,l1,l2,x,y,root->val);
}
     bool isCousins(TreeNode* root, int x, int y) {
        int parent1=-1, parent2=-1;
        int level1=-1,level2=-1;
        solve(root,parent1,parent2,0,level1,level2,x,y,-1);
        if(parent1==-1 || parent2==-1 ) return false;
        if(parent1==parent2) return false;
        
        if(level1!=level2) return false;
        return true;
    }
};
