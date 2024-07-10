#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mpp;
        for (char c : s) {
            mpp[c]++;
        }
        int k = mpp.begin()->second;
        for (auto i : mpp) {
            if (i.second != k) {
                return false;
            }
        }
        return true;
    }
};
