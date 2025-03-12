class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size(), count=0;

        for(int i=len-1; i>=0; i--)
        {
            if(s[i] == ' ' && count != 0)
                return count;

            // when it enters into the character of the last word 
            if(isalpha(s[i]) && s[i] != 0)
                count++;
        }

        return count;
    }
};
