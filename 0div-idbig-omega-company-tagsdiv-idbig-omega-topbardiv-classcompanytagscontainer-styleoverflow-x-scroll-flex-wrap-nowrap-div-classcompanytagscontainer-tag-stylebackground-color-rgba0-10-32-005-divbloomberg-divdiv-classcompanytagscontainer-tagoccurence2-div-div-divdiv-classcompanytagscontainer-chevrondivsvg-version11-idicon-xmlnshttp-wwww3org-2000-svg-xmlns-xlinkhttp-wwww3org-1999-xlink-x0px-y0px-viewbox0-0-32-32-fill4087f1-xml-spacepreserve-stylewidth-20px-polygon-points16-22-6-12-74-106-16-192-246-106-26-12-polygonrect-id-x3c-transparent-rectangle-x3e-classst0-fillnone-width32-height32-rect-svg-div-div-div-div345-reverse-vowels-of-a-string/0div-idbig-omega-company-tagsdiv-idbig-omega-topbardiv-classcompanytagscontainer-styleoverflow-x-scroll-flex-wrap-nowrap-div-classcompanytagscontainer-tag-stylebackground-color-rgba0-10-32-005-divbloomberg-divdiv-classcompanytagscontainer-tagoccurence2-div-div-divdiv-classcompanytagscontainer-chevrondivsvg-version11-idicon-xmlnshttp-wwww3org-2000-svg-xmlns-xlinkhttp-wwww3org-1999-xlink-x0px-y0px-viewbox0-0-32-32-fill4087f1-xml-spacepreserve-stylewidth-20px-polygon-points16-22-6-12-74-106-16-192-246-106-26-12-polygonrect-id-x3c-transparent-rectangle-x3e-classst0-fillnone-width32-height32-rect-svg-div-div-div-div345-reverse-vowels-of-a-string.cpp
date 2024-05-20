class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
               s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || 
               s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                v.push_back(s[i]);
                s[i] = '_';
            }
        }
        int j = v.size() - 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '_'){
                s[i] = v[j--];
            }
        }
        return s;
    }
};
