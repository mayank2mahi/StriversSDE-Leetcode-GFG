class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ex = "";
        int i = 0;
        while(i < word1.size() || i < word2.size()){
            if(i < word1.size()){
                ex = ex + word1[i];
            }
            if(i < word2.size()){
                ex = ex + word2[i];
            }
            i++;
        }
        return ex;
    }
};