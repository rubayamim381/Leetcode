class Solution {
public:
    string makeFancyString(string s) {
        int charCount = 0, lastIdx = 0;
        string fancyString = "";

        for (int i = 0; i < s.size(); i++) {
            if (fancyString[lastIdx] != s[i])
                charCount = 0;

            if (charCount < 2) {
                fancyString.push_back(s[i]);
                charCount++;
                lastIdx = fancyString.size() - 1;
            }
        }

        return fancyString;
    }
};
