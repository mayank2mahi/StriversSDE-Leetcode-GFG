class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        for (auto i : t) {
            mp[i]--;
            if (mp[i] < 0) {
                return i;
            }
        }
        return '\0';
    }
};