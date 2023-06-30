// Brute Force

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i = 0, j = 0;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = 0; j < nums.size(); j++){
//                 if((nums[i] + nums[j] == target) && (i != j)){
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// Optimal Solution

#include <bits/stdc++.h>
using namespace std;
string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}
