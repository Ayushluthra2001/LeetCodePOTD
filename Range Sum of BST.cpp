class Solution {
public:
    void inorder(TreeNode* root , vector<int>&el){
        if(root==NULL) return ;
        inorder(root->left,el);
        el.push_back(root->val);
        inorder(root->right,el);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>el;
        inorder(root,el);
        int sum=0;
        int i=0;
       
        while(i<el.size() ){
            if( el[i]>=low && el[i]<=high){
                sum+=el[i];
            
            }
            i++;
            
        }
        return sum;
    }
};
