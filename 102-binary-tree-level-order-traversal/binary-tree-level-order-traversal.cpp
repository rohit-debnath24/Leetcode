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
    vector<vector<int>> levelOrder(TreeNode* root) {
     
        //go insde the tree and check for the node 
        //hold the root node inside the stack
        // following the root go inside the tree 
        //take the root follow the childs 
        //store the childs n the stack 
        //then store the root in que 

        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
        
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);

                level.push_back(node->val);    
            }
            ans.push_back(level);
        }    
        return ans;
        




    }
};