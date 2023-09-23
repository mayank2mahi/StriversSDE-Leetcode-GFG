class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string g, h;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '#') {
                g.push_back(s[i]);
            } else {
                if (!g.empty()) {
                    g.pop_back();
                }
            }
        }

        for (int j = 0; j < t.length(); j++) {
            if (t[j] != '#') {
                h.push_back(t[j]);
            } else {
                if (!h.empty()) {
                    h.pop_back();
                }
            }
        }

        return g == h;
    }
};