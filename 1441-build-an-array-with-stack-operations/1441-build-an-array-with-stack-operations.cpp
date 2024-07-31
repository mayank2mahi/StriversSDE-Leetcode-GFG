class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s;
        int j = 0;
        for(int i = 1; i <= n && j < target.size(); i++) {
            if(i == target[j]) {
                s.push_back("Push");
                j++;
            } else {
                s.push_back("Push");
                s.push_back("Pop");
            }
        }
        return s;
    }
};
