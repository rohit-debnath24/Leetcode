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
    void inorder(TreeNode* root,int &nodes){
        if(root==NULL){
            return ;
        }
         if(root->left==NULL && root->right==NULL){
            nodes++;
            return ;
        }
        inorder(root->left,nodes);
        inorder(root->right,nodes);
        nodes++;



    }
    int countNodes(TreeNode* root) {
        int nodes=0;
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL &&root->right==NULL){
            return 1;
        }
        inorder(root,nodes);
        return nodes;

    }
};