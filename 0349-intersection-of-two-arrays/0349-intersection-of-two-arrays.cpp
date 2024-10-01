class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        vector<int> v;

        for (int i = 0; i < nums1.size(); i++) {
            mp1[nums1[i]]++;
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (mp1.find(nums2[i]) != mp1.end()) { 
                v.push_back(nums2[i]);
                mp1.erase(nums2[i]);
            }
        }
        return v;
    }
};
