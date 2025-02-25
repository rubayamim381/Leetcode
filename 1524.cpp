/*
step 1: Take sum_is_odd status as false(which means it is even) because,
        at first sum remains 0
step 2: check that each value of array is even or odd through & operation
step 3: Then, change sum_is_odd status using XOR operation with each value of array's even-odd status.
        We are using XOR operation here because,
            e + e = e => 0
            e + o = o => 1
            o + e = o => 1
            o + o = e => 0
        Here, 0 = even and 1 = odd
*/
class Solution
{
public:
    int numOfSubarrays(vector<int>& arr)
    {
        const int MOD = 1000000007;
        long long int ans = 0;

        bool sum_is_odd = 0;
        int counter[2] = {1, 0};

        for(auto x : arr)
        {
            sum_is_odd ^= (x&1); // if x is even or odd
            ans += counter[1 - sum_is_odd];
            counter[sum_is_odd]++;
        }

        return ans%MOD;


    }
};
