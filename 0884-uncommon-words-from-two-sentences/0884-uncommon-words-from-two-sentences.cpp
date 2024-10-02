class Solution {
public:
    map<string, int> mp;
    void dj(string s)
    {
        stringstream ss(s);
        string t;
        while (ss >> t) { 
            mp[t]++;
        }
    };

    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> v;
        string h = s1 + " " + s2;
        dj(h);
        for(auto i : mp){
            if(i.second == 1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};