class Solution
{
public:
    vector<int> applyOperations(vector<int>& nums)
    {

        int len = nums.size();

        for (int i = 0; i < len - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        vector<int> resultArr(len, 0);
        int notZeroIdx = 0;

        for(auto x : nums)
        {
            if(x != 0)
                resultArr[notZeroIdx++] = x;

        }

        return resultArr;
    }
};
