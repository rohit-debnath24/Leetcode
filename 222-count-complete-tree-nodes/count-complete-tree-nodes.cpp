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
    void trav(TreeNode* root,int &x){
        if(root==NULL){
            return;
        }
        if(root->left){
            x++;
        trav(root->left,x);
        }
        if(root->right){
            x++;
        trav(root->right,x);
        }
    }
    int countNodes(TreeNode* root) {
         if(root==NULL){
            return 0;
        }
        int x=0;
        trav(root,x);
        return x+1;
    }

};