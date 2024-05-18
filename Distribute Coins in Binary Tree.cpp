    int res = 0;
    int distributeCoins(TreeNode* root) {
        dfs(root);
        return res;
    }
    int dfs(TreeNode* root) {
        if (!root) return 0;
        int left = dfs(root->left), right = dfs(root->right);
        res += abs(left) + abs(right);
        return root->val + left + right - 1;
    }
