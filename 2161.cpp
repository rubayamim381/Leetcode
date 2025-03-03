class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> result(nums.size(), 0);
        int leftPtr = 0, rightPtr = nums.size() - 1;

        for (int i = 0, j = nums.size() - 1; i < nums.size(); ++i, --j)
        {
            if(nums[i] < pivot)
            {
                result[leftPtr] = nums[i];
                leftPtr++;
            }

            if(nums[j] > pivot)
            {
                result[rightPtr] = nums[j];
                rightPtr--;
            }
        }

        while(leftPtr <= rightPtr)
        {
            result[leftPtr] = pivot;
            leftPtr++;
        }

        return result;
    }
};
