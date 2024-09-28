class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int c = 0;
        for(auto it = mp.rbegin(); it != mp.rend(); ++it) {
            c += it->second;
            if(c >= k) {
                return it->first;
            }
        }
        return -1;
    }
};