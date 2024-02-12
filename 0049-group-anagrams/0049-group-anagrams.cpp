#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<vector<int>> charCount;
        
        for (const auto& str : strs) {
            vector<int> count(26, 0);
            for (char c : str)
                count[c - 'a']++;
            
            bool found = false;
            for (int i = 0; i < result.size(); ++i) {
                if (charCount[i] == count) {
                    result[i].push_back(str);
                    found = true;
                    break;
                }
            }
            
            if (!found) {
                result.push_back({str});
                charCount.push_back(count);
            }
        }
        
        return result;
    }
};
