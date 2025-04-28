/*
Approach: Sliding Window
TC: O(n)
SC: O(1)
*/
class Solution {
public:
    using ll = long long;
    long long countSubarrays(vector<int>& nums, long long k) {
        ll left = 0, countSubArray = 0, sum = 0;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum * (right - left + 1) >= k) {
                sum -= nums[left];
                left++;
            }
            countSubArray += (right - left + 1);
        }

        return countSubArray;
    }
};
