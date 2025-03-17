/*
    Approach: Find next digit 
    TC: O(logn)
    SC: O(n)
    Step 1: If the digit is lesser than it's next digit then, remove it
    Step 2: If there is no duplicate, then just merge the substrings without the digit 
*/ 
class Solution {
public:
    string removeDigit(string n, char digit) {

        for (int i = 0; i < n.size() - 1; ++i)
            if (n[i] == digit && n[i + 1] > digit)
                return n.substr(0, i) + n.substr(i + 1);

        int digitPos = n.rfind(digit);
        return n.substr(0, digitPos) + n.substr(digitPos + 1);
    }
};
