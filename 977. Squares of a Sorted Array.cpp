// Solution no. 1
// Two pointer
// TC : O(n)
// MC : O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        vector<int> sortedVect(n);

        for (int i=n-1; i>=0; i--) {
            if (abs(nums[left]) >= abs(nums[right])) {
            	sortedVect[i] = pow(nums[left], 2);
                left++;
            }
            else {
            	sortedVect[i] = pow(nums[right], 2);
                right--;
            }
        }

        return sortedVect;
    }
};



