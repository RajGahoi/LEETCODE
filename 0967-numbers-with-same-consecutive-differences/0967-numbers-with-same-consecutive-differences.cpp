class Solution {
public:
    vector<int> ans;
    int N, K;

    void dfs(int num, int len) {
        if (len == N) {
            ans.push_back(num);
            return;
        }

        int last = num % 10;
        int next1 = last + K;
        if (next1 <= 9) {
            dfs(num * 10 + next1, len + 1);
        }
        
        int next2 = last - K;
        if (K != 0 && next2 >= 0) {
            dfs(num * 10 + next2, len + 1);
        }
    }

    vector<int> numsSameConsecDiff(int n, int k) {
        N = n;
        K = k;

        for (int i = 1; i <= 9; i++) {
            dfs(i, 1);
        }

        return ans;
    }
};