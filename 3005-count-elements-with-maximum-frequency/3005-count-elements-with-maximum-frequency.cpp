class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> Count(101);
        int maxFreq = 0;
        int total = 0;
        for(int &num : nums){
            Count[num]++;
            int freq = Count[num];
            if(freq > maxFreq){
                maxFreq = freq;
                total = maxFreq;
            } else if(freq == maxFreq){
                total += maxFreq;
            }
        }
        return total;
    }
};