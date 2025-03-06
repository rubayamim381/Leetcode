class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        set<int> st;
        vector<int> ans(2,0);

        /*
        To find the missing value from 2D array, we need to do
        Step 1: Find the sum of the values from 2D array which is actual sum
        Step 2: Then, get the expected sum of the range(n = natural number), formula: (n*(n+1))/2
        Step 3: Missing value = expected sum - actual sum
        */

        int n = grid.size();
        int nSquare = n*n;
        int expectedSum = (nSquare*(nSquare+1))/2, actualSum = 0;

        for(auto x: grid) 
        {
            for(auto y: x)
            {
                if(st.count(y) == 1)
                    ans[0] = y;
                else
                    st.insert(y), actualSum += y;

            }
        }

        ans[1] = expectedSum - actualSum;

        return ans;
    }
};
