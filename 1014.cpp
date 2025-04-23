/*
Step 1: Keep track of the maximum value of values[i] + i as value_i
Step 2: For each index j:
          i. Calculate the score using the formula: value_i + values[j] - j
         ii. Update the maximum score as maxScore based on the current score.

TC: O(n)
SC: O(1)
*/
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        
        int maxScore = 0;
        int value_i = values[0];

        for (int i = 1; i < values.size(); i++) {
            if ((value_i + values[i] - i) > maxScore) 
                maxScore = value_i + values[i] - i;

            value_i = (value_i < values[i] + i) ? values[i] + i : value_i;
        }

        return maxScore;
    }
};
