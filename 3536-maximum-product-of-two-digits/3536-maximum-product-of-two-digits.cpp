class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(),s.end(),greater<int>());
        int a = s[0] - '0';
        int b = s[1] - '0';
        return a * b;

    }
};