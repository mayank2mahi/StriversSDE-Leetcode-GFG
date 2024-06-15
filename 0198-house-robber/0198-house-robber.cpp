class Solution {
public:
    int t[101];
    
    int solve(vector<int>& nums, int i, int n){
        if(i >= n){
            return 0;
        }
        
        if(t[i] != -1){               // DP MEMOIZATION 
            return t[i];
        }
        
        int steal = nums[i] + solve(nums, i + 2, n);
        int skip = solve(nums, i + 1, n);
        
        return t[i] = max(steal, skip);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        fill(begin(t), end(t), -1); // Initialize memoization array
        
        return solve(nums, 0, n);
    }
};
