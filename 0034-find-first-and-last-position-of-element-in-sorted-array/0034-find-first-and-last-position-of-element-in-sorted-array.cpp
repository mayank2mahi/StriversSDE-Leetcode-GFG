class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int l = 0;
        int h = nums.size() - 1;
        int first = -1;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(nums[mid] == target){
                first = mid;
                h = mid - 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        int last = -1;
        l = 0;
        h = nums.size() - 1;
        while(l <= h){
            int mid = l + (h-l)/2;
            if(nums[mid] == target){
                last = mid;
                l = mid + 1;
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};