class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int e : nums) {
            if (e < k)
                return -1;
            if (e > k)
                map[e]++;
        }

        return map.size();
    }
};
