class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> val = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = val[s.back()];  
        
        for (int i = s.size() - 2; i >= 0; i--) {
            int curr = val[s[i]];
            int prev = val[s[i + 1]];  

            if (curr < prev)
                result -= curr;   
            else
                result += curr;
        }

        return result;
    }
};