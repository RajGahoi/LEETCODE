class Solution {
public:
    void inorder(TreeNode* root, vector<int>& val) {
        if (!root)
            return;

        inorder(root->left, val);

        val.push_back(root->val);

        inorder(root->right, val);
    }

    bool findTarget(TreeNode* root, int k) {
        if (!root)
            return false;

        vector<int> val;

        inorder(root, val);

        int left = 0;
        int right = val.size() - 1;

        while (left < right) {

            int sum = val[left] + val[right];

            if (sum == k)
                return true;

            else if (sum < k)
                left++;

            else
                right--;
        }

        return false;
    }
};