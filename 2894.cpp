/*
Approach 1: 
*/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int totalSum = n * (n + 1) / 2;
        int k = n / m;
        int sumMultiples = m * k * (k + 1);
        return totalSum - sumMultiples;
    }
};

/*
Approach 2: 
*/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int differenceOfSums = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m)
                differenceOfSums += i;
            else
                differenceOfSums -= i;
        }

        return differenceOfSums;
    }
};
