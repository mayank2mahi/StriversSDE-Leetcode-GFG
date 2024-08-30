class Solution {
public:
    int romanToInt(string s) {
        vector<pair<char, int>> pp = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500},                 {'M', 1000}
        };
        vector<int> v;
        
        for(int i = 0; i < s.size(); i++){
            for(auto h : pp){
                if(s[i] == h.first){
                    v.push_back(h.second);
                    break;
                }
            }
        }

        int sum = 0;
        for(int i = 0; i < v.size(); i++){
            if(i < v.size() - 1 && v[i] < v[i + 1]){
                sum -= v[i];
            } else {
                sum += v[i];
            }
        }
        return sum;
    }
};
