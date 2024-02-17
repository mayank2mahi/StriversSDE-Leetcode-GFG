class Solution {
public:
    string reverseWords(string s) {
        vector<string> senti;
        string word;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                word += s[i];
            }
            else if(!word.empty()){
                senti.push_back(word);
                word = "";
            }
        }
        if(!word.empty()){
            senti.push_back(word);
        }

        reverse(senti.begin(), senti.end());

        string r;
        for(string w : senti){
            r += w + " ";
        }
        if(!r.empty()){
            r.pop_back();
        }

        return r;
    }
};
