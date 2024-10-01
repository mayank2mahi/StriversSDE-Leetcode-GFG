class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c = 0;
        vector<int> v;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i + 1]){
                c++;
            }
            if(nums[i] >= nums[i + 1]){
                v.push_back(c + 1);
                c = 0;
            }
            
        }
        v.push_back(c + 1);
        sort(v.begin(), v.end());
        return v[v.size() - 1];
    }
};