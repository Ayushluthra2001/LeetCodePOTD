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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        long long ans = 0;
        int level = 0;

        priority_queue<long,vector<long>,greater<long>>pq;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size =q.size();
            
            long long sum = 0;
            for(int i = 0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
                sum+=front->val;
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            if(pq.size() >= k){

                pq.push(sum);
                pq.pop();
            }else{
                pq.push(sum);

            }
            level++;
        }
        if(k > level) return -1;
        return pq.top();
    }
};
