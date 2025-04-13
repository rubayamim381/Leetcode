class Solution {
public:
    const int MOD = 1e9 + 7;

    int countGoodNumbers(long long n) {
        long long evenPosLength = (n + 1) / 2;
        long long oddPosLength = n / 2;

        // 5^(n_even_positions) × 4^(n_odd_positions)
        long long evenWays = countPower(5, evenPosLength);
        long long oddWays = countPower(4, oddPosLength);
        
        return (evenWays * oddWays) % MOD;
    }

    long long countPower(long long base, long long power) {
        long long result = 1;
        base %= MOD;

        while (power > 0) {
            if (power % 2 == 1)
                result = (result * base) % MOD;

            base = (base * base) % MOD;
            power /= 2;
        }
      
        return result; 
    }
};
