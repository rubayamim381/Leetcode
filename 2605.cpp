// TC: O(n+m)
// SC: O(n+m)
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {

        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());

        for (size_t digit = 1; digit <= 9; digit++) {
            if (set1.count(digit) && set2.count(digit))
                return digit;
        }

        int minDigit1 = 10, minDigit2 = 10;
        for (auto e : nums1) {
            if (minDigit1 > e)
                minDigit1 = e;
        }

        for (auto e : nums2) {
            if (minDigit2 > e)
                minDigit2 = e;
        }

        return min(minDigit1 * 10 + minDigit2, minDigit2 * 10 + minDigit1);
    }
};
