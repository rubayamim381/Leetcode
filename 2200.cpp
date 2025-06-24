/*
Approach 1: Brute force solution
TC: O(n2)
SC: O(1)
*/
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> index;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (nums[j] == key && abs(i - j) <= k) {
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};


/*
Approach 2: Optimized One-Pass with Marking
TC: O(n)
SC: O(1)

Step 1: Initialize a pointer right = 0 which will be used to add right indices of k-distance.
Step 2: Traverse the array. When you find nums[j] == key:
        - Compute the interval [max(j-k, right), min(j+k, n-1)] of k distance.
        - Update right = min(j+k+1, n) to avoid re-adding same indices.
        - Add all of the indices in this interval to a vector.
*/
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> distantIndices; 
        int len = nums.size();
        int right = 0;

        for (int j = 0; j < len; j++) {
            if (nums[j] == key) {
                int left = max(right, j - k);
                right = min(j + k, len - 1) + 1;

                for(int i = left; i < right; i++) {
                    distantIndices.push_back(i);
                }
            }
        }

        return distantIndices;
    }
};
