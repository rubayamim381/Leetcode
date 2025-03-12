/*
Approach 1: Tabulation
The tabulation solution eliminates recursion and uses a bottom-up approach to solve the problem iteratively. 
Step 1: It creates a DP table (dp) of size n+1 to store the number of ways to reach each step. 
Step 2: The base cases (0 and 1 steps) are initialized to 1 since there is only one way to reach them. 
Step 3: Then, it iterates from 2 to n, filling in the DP table by summing up the values for the previous two steps. 
Step 4: Finally, it returns the value in the last cell of the DP table, which represents the total number of ways to reach the top.
*/

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        int prev = 1, curr = 1;
        for (int i = 2; i <= n; i++) {
            int temp = curr;
            curr = prev + curr;
            prev = temp;
        }
        return curr;
    }
};

/*
Approach 2: Space Optimisation
*/

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int sec_prev = 1, last_prev = 2, curr;
        for (int i = 3; i <= n; i++) {
            curr = last_prev + sec_prev;  
            sec_prev = last_prev;
            last_prev = curr;
        }

        return curr;
    }
};
