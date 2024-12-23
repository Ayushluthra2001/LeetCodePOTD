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
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        int count = 0;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i = 0; i<size; i++){
                TreeNode* front = q.front();
                q.pop();
                level.push_back(front->val);
                if(front->left != NULL)q.push(front->left);
                if(front->right != NULL )q.push(front->right);

            }
            unordered_map<int,int>mapping;
            for(int i =0; i<level.size(); i++) mapping[level[i]] = i;
            vector<int>sorted = level;
            sort(sorted.begin(),sorted.end());
            for(int i =0; i<sorted.size();i++){
                if(level[i] != sorted[i]){
                    count++;
                    int s = mapping[sorted[i]];
                    int wr = level[i];
                    int temp = level[s];
                    level[s] = level[i] ;
                    level[i] = temp;
                    mapping[sorted[i]] = i;
                    mapping[wr] = s;                    
                }
            }
        }


        return count;
    }
};
