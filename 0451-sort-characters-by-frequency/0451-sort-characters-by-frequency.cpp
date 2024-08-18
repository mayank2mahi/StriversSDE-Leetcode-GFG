class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>> pq;
        for(auto it :m){
            pq.push({it.second,it.first});
        }
        
        string ans="";
        while(!pq.empty()){
            auto it=pq.top();
            for(int i=0;i<it.first;i++){  // heap me aane k baad jitna frequency(it.first)                                              hota h utna push back hota h
                ans+=it.second;
            }
            
            pq.pop();
        }
        return ans;
    }
};