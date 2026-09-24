class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        vector<vector<int>> ans;

        if (!root)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {

                TreeNode* cur = q.front();
                q.pop();

                level.push_back(cur->val);

                if (cur->left)
                    q.push(cur->left);

                if (cur->right)
                    q.push(cur->right);
            }

            ans.push_back(level);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};