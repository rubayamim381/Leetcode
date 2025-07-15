class Solution {
public:
    bool isValid(string word) {
        int len = word.size();
        bool isVowel = false, isConsonent = false;
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        if (len < 3)
            return false;

        for (auto e : word) {
            if (!isalpha(e) && !isdigit(e))
                return false;
            else if (isalpha(e)) {
                (vowels.count(e)) ? isVowel = true : isConsonent = true;
            }
        }

        return isVowel && isConsonent;
    }
};
