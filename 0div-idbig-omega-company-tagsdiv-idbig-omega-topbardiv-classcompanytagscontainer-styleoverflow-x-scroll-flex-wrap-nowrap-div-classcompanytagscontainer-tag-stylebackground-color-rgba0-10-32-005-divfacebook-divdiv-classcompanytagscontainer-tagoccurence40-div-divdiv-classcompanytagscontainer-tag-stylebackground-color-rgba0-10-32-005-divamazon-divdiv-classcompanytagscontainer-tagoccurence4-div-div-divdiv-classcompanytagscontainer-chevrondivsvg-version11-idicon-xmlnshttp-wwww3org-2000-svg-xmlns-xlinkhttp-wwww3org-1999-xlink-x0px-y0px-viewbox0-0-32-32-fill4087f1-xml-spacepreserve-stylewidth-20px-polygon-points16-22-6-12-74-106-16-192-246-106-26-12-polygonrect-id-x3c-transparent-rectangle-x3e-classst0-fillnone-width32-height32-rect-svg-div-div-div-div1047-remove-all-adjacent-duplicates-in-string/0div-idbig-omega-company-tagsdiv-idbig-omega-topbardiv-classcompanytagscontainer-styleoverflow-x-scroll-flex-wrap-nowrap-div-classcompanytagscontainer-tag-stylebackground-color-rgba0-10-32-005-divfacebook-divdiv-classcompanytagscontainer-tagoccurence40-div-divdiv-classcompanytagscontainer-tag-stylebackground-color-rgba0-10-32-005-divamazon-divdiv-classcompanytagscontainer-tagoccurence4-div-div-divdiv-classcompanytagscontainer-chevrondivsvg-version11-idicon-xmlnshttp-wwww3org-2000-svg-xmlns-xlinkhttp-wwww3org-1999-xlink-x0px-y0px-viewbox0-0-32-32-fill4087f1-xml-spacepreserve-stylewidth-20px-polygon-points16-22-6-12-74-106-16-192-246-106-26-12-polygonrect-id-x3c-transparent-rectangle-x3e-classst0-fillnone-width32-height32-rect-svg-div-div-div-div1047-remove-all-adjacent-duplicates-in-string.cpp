class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        string r;
        for (char c : s) {
            if (!r.empty() && r.back() == c) {
                r.pop_back();
            } else {
                r.push_back(c);
            }
        }
        return r;
    }
};
