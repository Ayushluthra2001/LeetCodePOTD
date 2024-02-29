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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode* > q;
        q.push(root);
        vector<vector<int>>levels;
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right)q.push(node->right);

            }
            levels.push_back(temp);
        }
        for(auto i : levels){
            for(auto j : i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        cout<<"HElllo"<<endl;
        bool ans=true;
        for(int i=0;i<levels.size();i++){
            bool flag=true;
            
            if(i%2==0){
               // cout<<"i"<<i<<endl;
                for(int j=0;j<levels[i].size()-1;j++){
                   // cout<<levels[i][j]<<" ";
                    if(levels[i][j]%2==0 || levels[i][j]>=levels[i][j+1]) flag=false;

            }
            //cout<<endl;
            if(levels[i].size()==1){
                if(levels[i][0]%2==0) flag=false;
            }
            if(levels[i][levels[i].size()-1] %2==0) flag=false;
            }else{
                if(levels[i][levels[i].size()-1]%2!=0) flag=false;
                if(levels[i].size()==1){
                    if(levels[i][0]%2!=0) flag=false;
                }
                for(int j=0;j<levels[i].size()-1;j++){
                    if(levels[i][j]%2!=0 || levels[i][j]<=levels[i][j+1]) flag=false;

            }
            
            }
            ans=ans&&flag;
            
        }

        return ans;
        
    }
};
