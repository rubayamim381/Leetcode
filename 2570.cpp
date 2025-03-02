class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        map<int, int> mp;
        vector<vector<int>> mergeArrays;

        for (auto& x : nums1) {
            mp[x[0]] += x[1];
        }

        for (auto& x : nums2) {
            mp[x[0]] += x[1];
        }

        for (auto& x : mp)
            mergeArrays.push_back({x.first, x.second});

        return mergeArrays;
    }
};
