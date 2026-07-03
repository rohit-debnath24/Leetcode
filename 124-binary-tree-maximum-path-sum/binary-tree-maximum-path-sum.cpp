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
    int PathSum(TreeNode* root,int &sum){
        int x=0;
        //if root not exist
        if(!root){
            return 0;
        }
        //when both left right dont exist 
        if(!root->left && !root->right){
            x= root->val;
            sum=max(sum,x);
        }
        int left=max(0,PathSum(root->left,sum));
        int right=max(0,PathSum(root->right,sum));
        //when only left exists
        if(root->left){
            x= root->val+left;
            sum=max(sum,x);
        }
        //when only right exists
        if( root->right){
           x= root->val+right;
            sum=max(sum,x);

        }
        //when both exists
        if(root->left && root->right){
            sum=max(sum,root->val+left+right);
            x= root->val+max(left,right);
        }
        return x;
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        int val=PathSum(root,sum);
        // if(root->left && root->right){
        //     return sum;
        // }
        return max(sum,val);
    }
};