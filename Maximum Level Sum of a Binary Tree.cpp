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
    int maxLevelSum(TreeNode* root) {
        int level=1;
        int maxi=INT_MIN;
        int curr=1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int sum=0;

            for(int i=0;i<s;i++){
                TreeNode* top=q.front();
                q.pop();
                sum+=top->val;
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            if(maxi<sum){
                if(maxi==sum){
                    level=min(level,curr);
                }else{
                    level=curr;
                }
                maxi=sum;
            }
            curr++;
        }
        return level;
    }
};
