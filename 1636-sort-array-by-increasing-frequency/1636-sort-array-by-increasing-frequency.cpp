bool mycomp(pair<int, int> a, pair<int, int> b){
    if(a.second < b.second){
        return true;
    }
    else if(a.second > b.second){
        return false;
    }
    else{
        return a.first >= b.first;
    }
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> vp;
        for(auto i : mp){
            vp.push_back({i.first,i.second});
        }
        sort(vp.begin(), vp.end(), mycomp);
        
        vector<int> final;
        for(auto i : vp){
            int x = i.first;
            int y = i.second;
            while(y--){
                final.push_back(x);
            }
        }
        return final;
    }
};