class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 1;
        int left = 0;
        int used_bits = 0;
        
        for (int right = 0; right < n; ++right) {
            while ((used_bits & nums[right]) != 0) {
                used_bits ^= nums[left];
                ++left;
            }
            
            used_bits |= nums[right];
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
    }
};
