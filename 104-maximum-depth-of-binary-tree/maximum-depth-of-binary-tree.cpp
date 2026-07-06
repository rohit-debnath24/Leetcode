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
    void height(TreeNode*root,int& h,int x){
        
        if(root==NULL){
            return;
        }
        x++;
        h=max(x,h);
        height(root->left,h,x);
        height(root->right,h,x);
    }
    int maxDepth(TreeNode* root) {
        int hl=0;
        int hr=0;
        if(!root){
            return hl;
        }
        if(root->left){
        height(root->left,hl,0);

        }
        if(root->right){
        height(root->right,hr,0);

        }
        int h=max(hl,hr);
        return h+1;
    }
};