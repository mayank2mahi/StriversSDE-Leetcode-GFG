class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        nums.erase(nums.begin(), nums.end());
        
        for(auto i : mp){
            nums.push_back(i.first);
        }
        return nums.size();
    }
};