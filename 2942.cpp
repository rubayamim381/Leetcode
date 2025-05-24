class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        const int len = words.size();
        vector<int> arrayOfIdx {};

        for (int i = 0; i < len; i++) {
            if (words[i].find(x) != words[i].npos) {
                arrayOfIdx.emplace_back(i);
            }
        }

        return arrayOfIdx;
    }
};
