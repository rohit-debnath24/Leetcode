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
    void check(TreeNode* p, TreeNode* q,bool &x){
        if(!p||!q){
            return;
        }
        if(p->val!=q->val){
            x= false;
        }
        if(p->left!=NULL && q->left!=NULL ){
        check(p->left,q->left,x);
        }else if (p->left!=NULL && q->left==NULL){
            x=false;
        }else if(p->left==NULL && q->left!=NULL){
            x=false;
        }

        if(p->right!=NULL && q->right!=NULL){
        check(p->right,q->right,x);
        }else if(p->right!=NULL && q->right==NULL){
            x=false;
        }else if(p->right==NULL && q->right!=NULL){
            x=false;
        }

        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((!p && q) ||(p && !q) ){
            return false;
        }
        bool x=true;
        check(p,q,x);
        return x;
    }
};