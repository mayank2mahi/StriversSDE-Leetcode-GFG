class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long j = nums[0]*nums[1];
        j = j * nums[n - 1];
        long long k = nums[n-1]*nums[n-2];
        k = k * nums[n-3];
        if(j > k){
            return j;
        }
        else{
            return k;
        }
    }
};