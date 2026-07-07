class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for (unordered_map<int, int>::iterator freq = mp.begin(); freq != mp.end(); freq++) {
            if (freq->second > n / 3) {
                ans.push_back(freq->first);
            }
        }

        return ans;
    }
};