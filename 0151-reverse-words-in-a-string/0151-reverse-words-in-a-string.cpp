class Solution {
public:
    string reverseWords(string s) {
        
        stringstream dj(s);
        string word;
        string ans;
        
        while(dj >> word){
            if(!ans.empty()){
                word = word + " ";
            }
            ans = word + ans;
        }
        return ans;
    }
};