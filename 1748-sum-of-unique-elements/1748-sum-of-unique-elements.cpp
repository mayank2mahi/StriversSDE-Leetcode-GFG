class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int s = 0;
        for(auto t : mp){
            if(t.second < 2){
                s = s + t.first;
            }
        }
        return s;
    }
};