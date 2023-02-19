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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool zigzag=false;
        while(!q.empty()){
            vector<int>temp;
            int size=q.size();
            // cout<<size<<" ";
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                // cout<<node->val<<" ";
                temp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            // cout<<endl;
            if(zigzag){
                reverse(temp.begin(),temp.end());
                zigzag=false;
            }else{
                zigzag=true;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
