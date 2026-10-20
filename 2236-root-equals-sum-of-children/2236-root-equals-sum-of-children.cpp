class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(!root)return false;
        if(root->right && root -> left){
        if(root->right->val + root->left->val == root->val) 
        return true;
        else 
        return false;
        }
        return false;
    }
};