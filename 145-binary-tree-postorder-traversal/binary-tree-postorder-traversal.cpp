#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    // Approach 1: Recursive (Cleanest)
    void help(TreeNode* root, vector<int>& res) {
        if (!root) return;
        help(root->left, res);
        help(root->right, res);
        res.push_back(root->val);
    }

    vector<int> postorderTraversalRecursive(TreeNode* root) {
        vector<int> res;
        help(root, res);
        return res;
    }

    // Approach 2: Iterative (Using a Stack)
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if (!root) return res;

        stack<TreeNode*> s;
        s.push(root);

        while (!s.empty()) {
            TreeNode* curr = s.top();
            s.pop();
            res.push_back(curr->val);

            // Push left then right so that right is processed first 
            // (creating Root -> Right -> Left order)
            if (curr->left) s.push(curr->left);
            if (curr->right) s.push(curr->right);
        }

        // Reverse the result to get Left -> Right -> Root
        reverse(res.begin(), res.end());
        return res;
    }
};