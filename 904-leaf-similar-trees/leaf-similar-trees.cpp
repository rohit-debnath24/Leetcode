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
    void inorder1(TreeNode* root,vector <int> &arr){
        if(!root){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            arr.push_back(root->val);
        }
        inorder1(root->left,arr);
        inorder1(root->right,arr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> arr1;
        vector <int> arr2;
        inorder1(root1,arr1);
        inorder1(root2,arr2);
        if(arr1==arr2){
            return true;
        }
        return false;
    }
};