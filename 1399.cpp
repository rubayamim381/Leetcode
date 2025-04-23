/*
As the constraints are 1<=n<=10^4, the largest possible sum is in the case where all the digits are 9.
For 9999, 9999 = 9 + 9 + 9 + 9 = 36
Step 1: Initialise an array of size 37 where each index stores the frequency of numbers with the sum of i digits.
Step 2: Compute the digit sum of a number.
Step 3: Then, traverse through sums array and check for the largest group size & the number of indexes having this size.

TC: O(n*digits) -> O(n*4) -> O(n)
SC: O(37) -> O(1)
*/

class Solution {
public:
  int digitSum(int n) {
        int sum = 0;

        while (n) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }
    int countLargestGroup(int n) {
        vector<int> sumFreq(37);

        for (int i = 1; i <= n; i++) {
            sumFreq[digitSum(i)]++;
        }

        int maxFreq = 0, countGroups = 0;
        for (int& p : sumFreq) {
            if (p > maxFreq) {
                maxFreq = p;
                countGroups = 1;
            } else if (p == maxFreq)
                countGroups++;
        }

        return countGroups;
    }
};
