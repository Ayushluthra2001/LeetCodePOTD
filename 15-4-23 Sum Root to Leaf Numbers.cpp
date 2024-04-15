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
    void solve(TreeNode* root, int &sum, string temp){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            string c=to_string(root->val);
           // cout<<c<<endl;
            string temp2=temp;
            temp2+=c;
            
                //cout<<temp<<" "<<temp2<<endl;
                if(temp2.length()>0)sum+=stoi(temp2);
            return ;
        }
        string c=to_string(root->val);
        //cout<<ch<<endl;
        solve(root->left,sum,temp+c);
        solve(root->right,sum,temp+c);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        solve(root,sum,"");
        return sum;
    }
};
