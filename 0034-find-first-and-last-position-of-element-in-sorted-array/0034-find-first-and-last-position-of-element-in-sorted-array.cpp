class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        vector<int> v;
        while(i <= j){
            if(nums[i] == target && v.size() < 3){
                v.push_back(i);
                break;
            }
            i++;
        }
        while(j >= i){
            if(nums[j] == target && v.size() < 3){
                v.push_back(j);
                break;
            }
            j--;
        }
        if(v.size() == 0){
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
    }
};