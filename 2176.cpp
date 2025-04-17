/*
Approach 1: HashMap
Step 1: Track indices of similar pairs
Step 2: Use brute force to traverse the value of trackIndices to find out (i * j) % k == 0 and count the pairs

TC: O(n^2)
SC: O(n)
*/

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> trackIndices;
        int countPairs = 0;

        for (int i = 0; i < nums.size(); i++)
            trackIndices[nums[i]].push_back(i);

        for (auto& [value, index] : trackIndices) {
            int indexLength = index.size();
            for (int i = 0; i < indexLength; i++)
                for (int j = i + 1; j < indexLength; j++) {
                    if ((index[i] * index[j]) % k == 0)
                        countPairs++;
                }
        }

        return countPairs;
    }
};
