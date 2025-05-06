/*
Approach 1: Build as required
Let n be the length of the nums.
Time complexity: O(n).
This is the time complexity for constructing the new array.

Space complexity: O(1).
The output array is not counted in the space complexity.
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
            ans.push_back(nums[nums[i]]);
        return ans;
    }
};

/*
Approach 2: Build In required array
We noticed that the range of values of the elements in nums is [0,999] inclusive, which means that both the 'current value' and the 'final value' of each element in nums are within the closed interval [0,999]
Step 1: first traverse nums, calculate the "final value" of each element, and add 1000 times that value to the element. 
Step 2: Then, we traverse the array again, and divide the value of each element by 1000, retaining the quotient.

Let n be the length of the nums.
Time complexity: O(n).
We traversed and modified the nums array twice, and the time complexity of each traversal and modification is O(n).

Space complexity: O(1).
Only a few additional variables are needed.
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
       
        for (int i = 0; i < n; ++i) {
            nums[i] += 1000 * (nums[nums[i]] % 1000);
        }

        for (int i = 0; i < n; ++i) {
            nums[i] /= 1000;
        }
        return nums;
    }
};
