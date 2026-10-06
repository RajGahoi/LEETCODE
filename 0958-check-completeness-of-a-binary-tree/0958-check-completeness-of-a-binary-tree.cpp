class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
       queue<TreeNode*>q;
       q.push(root);

       bool gap = false;
       while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();

        if (node == NULL){
            gap = true;
        }
        else {
            if(gap){
                return false;
            }
            q.push(node->left);
           q.push(node->right);
        }
       }
       return true;
    }
};