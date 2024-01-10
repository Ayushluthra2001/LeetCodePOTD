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
TreeNode* createMapping(TreeNode* root, int start,unordered_map<TreeNode* , TreeNode*>&mapping){
    queue<TreeNode*>q;
    q.push(root);
    TreeNode* res=NULL;
    mapping[root]=NULL;
    while(!q.empty()){
        TreeNode* front=q.front();
        q.pop();
        if(front->val==start){
            res=front;
        }
        if(front->left){
            mapping[front->left]=front;
            q.push(front->left);
        }
        if(front->right){
            mapping[front->right]=front;
            q.push(front->right);
        }
    }
    return res;
}
int burningTree(TreeNode* res, unordered_map<TreeNode*,TreeNode*>&mapping){
    unordered_map<TreeNode*,bool>visited;
    visited[res]=true;
    queue<TreeNode*>q;
    
    q.push(res);
    int ans=0;
    while(!q.empty()){
        int size=q.size();
        bool flag=false;
        for(int i=0;i<size;i++){
            TreeNode* front=q.front();
            q.pop();
            if(front->left && !visited[front->left]){
                q.push(front->left);
                visited[front->left]=1;
                flag=true;
            }
            if(front->right && !visited[front->right]){
                q.push(front->right);
                
                flag=true;
                visited[front->right]=1;
            }
            if(mapping[front] && !visited[mapping[front]]){
                q.push(mapping[front]);
                visited[mapping[front]]=1;
                flag=true;
            }
        }
        if(flag) ans++;

    }
    return ans;
}
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode* ,TreeNode*>mapping;
        TreeNode* find=createMapping(root,start,mapping);
        return burningTree(find,mapping);
    }
};
