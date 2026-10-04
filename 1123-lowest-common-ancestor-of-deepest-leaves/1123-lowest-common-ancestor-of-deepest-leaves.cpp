class Solution {
public:
        int Depth(TreeNode* root) {
        if(!root)return NULL;
        int right = Depth(root->right);
        int left = Depth(root->left);
        return 1 + max(right,left);
    }
    TreeNode* solve(TreeNode* root,int depth,int maxD){
    if(!root)return NULL;
    if(!root->left && !root->right && depth == maxD)
    return root;
    TreeNode* left = solve(root->left,depth+1,maxD);
    TreeNode* right = solve(root->right,depth+1,maxD);
    
    if(left && right)
    return root;

    if(left)
    return left;

    if(right)
    return right;

    return NULL;

    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int maxD = Depth(root);
        return solve(root,1,maxD);
    }
};