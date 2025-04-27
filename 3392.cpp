/*
TC: O(n)
SC: O(1)
*/
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;

        for (int left = 0, right = 2; right < nums.size(); left++, right++) {
            int mid = (left + right) / 2;
            if (2 * (nums[left] + nums[right]) == nums[mid])
                count++;
        }

        return count;
    }
};
