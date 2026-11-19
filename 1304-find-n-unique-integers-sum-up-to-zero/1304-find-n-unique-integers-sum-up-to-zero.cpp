class Solution {
public:
    vector<int> sumZero(int n) {
        if (n == 0) {
            return {};
        }
        if (n == 1) {
            return {0};
        }
     vector<int> ans = sumZero(n-2);
     ans.push_back(-n);
     ans.push_back(n);
     return ans;    
    
    }
};