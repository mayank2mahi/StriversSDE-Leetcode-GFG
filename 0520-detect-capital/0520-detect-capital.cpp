class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.size() == 1) {
            return true;
        }
        bool isFirstUpper = isupper(word[0]);
        bool allLowerRest = true, allUpperRest = true;
        
        for (int i = 1; i < word.size(); i++) {
            if (islower(word[i])) {
                allUpperRest = false;
            }
            if (isupper(word[i])) {
                allLowerRest = false;
            }
        }
        if (isFirstUpper) {
            return allLowerRest || allUpperRest;
        } else {
            return allLowerRest;
        }
    }
};
