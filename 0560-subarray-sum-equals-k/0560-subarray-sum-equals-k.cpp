// class Solution {                            // Brute Force Approach
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int c = 0;
//         for(int i = 0; i < nums.size(); i++){
//             int sum = 0;
//             for(int j = i; j < nums.size(); j++){
//                 sum = sum + nums[j];
//                 if(sum == k){
//                     c++;
//                 }
//             }
//         }
//         return c;
//     }
// };

class Solution {                            
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        int csum = 0;
        int c = 0;
        mp.insert({0, 1});  
        for(int i = 0; i < nums.size(); i++){
            csum = csum + nums[i];
            int target = csum - k;
            if(mp.find(target) != mp.end()){
                c = c + mp[target];
            }
            mp[csum]++;
        }
        return c;
    }
};

