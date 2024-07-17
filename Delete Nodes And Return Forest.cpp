

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

    void inorder(TreeNode* root, unordered_map<int,TreeNode*>& mapping,map<int,TreeNode*>& mapping2,int& curr){
        if(root==NULL) return ;
        curr++;
        inorder(root->left,mapping,mapping2,curr);
        mapping[root->val] = root;
        mapping2[root->val] = root;
        curr++;
        inorder(root->right,mapping,mapping2,curr);


    }

    TreeNode*  traverseTree(TreeNode* root, unordered_map<int,TreeNode*>& mapping,map<int,TreeNode*>& mapping2){
        if(root==NULL) return NULL ;
        if(mapping2[root->val]==NULL) return NULL;

        TreeNode* newRoot = new TreeNode(root->val);
            if(root->left && mapping[root->left->val]!=NULL)
            newRoot->left  = traverseTree(root->left , mapping,mapping2);
            else newRoot->left = NULL;
            if(root->right && mapping[root->right->val]!=NULL)
            newRoot->right =traverseTree(root->right, mapping,mapping2);
            else newRoot->right = NULL;
        
        
        
       mapping[root->val]=NULL;
       mapping2[root->val]=NULL;
        return newRoot;
    }
    void inorder2(TreeNode* root, unordered_map<int,TreeNode*>& mapping,vector<TreeNode*>& ans,map<int,TreeNode*>& mapping2){
            if(root==NULL) return;
            
            TreeNode* temp_root = traverseTree(root,mapping,mapping2);
           if(temp_root != NULL)
           ans.push_back(temp_root);
        }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_map<int, TreeNode* >mapping;
        map<int,TreeNode*>mapping2;
        vector<TreeNode*>ans;


        int curr=0;
        inorder(root,mapping,mapping2,curr);
        for(auto i : to_delete) mapping[i]=NULL,mapping2[i]=NULL;

        
        

        inorder2(root,mapping,ans,mapping2);
        // for(auto i : mapping2){
        //     cout<<i.first<<" ";
        //     if(i.second!=NULL) cout<<"NOTNULL"<<endl;
        //     else cout<<"NULL"<<endl;
        // }
        for(auto i : mapping2){
            if(i.second!=NULL){
                TreeNode* newRoot = traverseTree(i.second,mapping,mapping2);
                ans.push_back(newRoot);
            }
        
        }
        
         
        return ans;
    }
};
