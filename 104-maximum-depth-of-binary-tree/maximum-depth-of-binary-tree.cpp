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
    
    int calMax(TreeNode* root){
        if(root==NULL)
                return 0;
        //  if(root->left ==NULL )
        //         return 0;
        //         if(root->right==NULL)
        //         return 0;

                int l=calMax(root->left);
                int r=calMax(root->right);
            //    int sum=l+r;
                // res=max(res,sum);
           return 1+max(l,r); 
        }
    int maxDepth(TreeNode* root) {
        int res=0;
        
     return calMax(root); 
    }
};