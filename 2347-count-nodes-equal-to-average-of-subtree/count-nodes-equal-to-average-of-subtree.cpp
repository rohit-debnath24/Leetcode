class Solution {
public:
    void find(TreeNode* root, int& sum, int& count) {
        if (root == NULL)
            return;
        sum += root->val;
        count++;
        find(root->left, sum, count);
        find(root->right, sum, count);
    }
    void dfs(TreeNode* root, int& ans) {

        if (root == NULL)
            return;
        int sum = 0;
        int count = 0;
        find(root, sum, count);
        if (count != 0) {
            int avg = sum / count;
            if (avg == root->val)
                ans++;
        }

        dfs(root->left, ans);
        dfs(root->right, ans);
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        dfs(root, ans);
        return ans;
    }
};