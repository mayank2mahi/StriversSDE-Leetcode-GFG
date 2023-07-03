// Brute Forc
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if((nums[i] + nums[j] == target) && (i != j)){
                    return {i, j};
                }
            }
        }
        return {};
    }
};


// Better Solution (HASH MAPPING)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int moreNeed = target - num;
            if(mpp.find(moreNeed) != mpp.end()){
                return {mpp[moreNeed] , i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};


// Optimal Solution (TWO POINTER APPROACH)
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
