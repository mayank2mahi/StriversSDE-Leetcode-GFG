class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = nums.size();
        vector<int> v;
        for(int i = 0; i < j; i++){
            if(nums[i]%2 == 0){
                v.push_back(nums[i]);
            }
        }
        for(int i = 0; i < j; i++){
            if(nums[i]%2 != 0){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};