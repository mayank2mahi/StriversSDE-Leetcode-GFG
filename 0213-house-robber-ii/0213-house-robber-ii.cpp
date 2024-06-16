class Solution {
public:
    int t[101];
    
    int solve(vector<int>& nums, int i, int n){
        if(i > n){
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
        
        if(n == 1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0], nums[1]);
        }
        
        fill(begin(t), end(t), -1); // Initialize memoization array
        // Take first house therefore last house should not be taken
        int first = solve(nums, 0, n-2);
        
        fill(begin(t), end(t), -1); // Initialize memoization array
        // Take first house therefore last house should not be taken
        int last = solve(nums, 1, n-1);
        
        return max(first, last);
    }
};