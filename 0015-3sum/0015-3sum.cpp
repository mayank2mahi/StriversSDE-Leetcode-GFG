// Brute force

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& arr) {
//     set<vector<int>> st;
//     int n = arr.size();
// 	for(int i = 0; i < n; i++){
// 		set<int> hashset;
// 		for(int j = i + 1; j < n; j++){
// 			int third = - (arr[i] + arr[j]);
// 			if(hashset.find(third) != hashset.end()){
// 				vector<int> temp = {arr[i], arr[j], third};
// 				sort(temp.begin(), temp.end());
// 				st.insert(temp);
// 			}
// 			hashset.insert(arr[j]);
// 		}
// 	}
// 	vector<vector<int>> ans(st.begin(), st.end());
// 	return ans;
//     }
// };

// Optimal Solution

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j=i + 1;
            int k=nums.size() - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0)
                {
                     j++;
                }
                else if(sum > 0)
                {
                    k--;
                }
                else
                {
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k and (nums[j-1] == nums[j])) j++;
                    while(j < k and (nums[k+1] == nums[k])) k--;
                }
            }
        }
        return ans;
    }
};