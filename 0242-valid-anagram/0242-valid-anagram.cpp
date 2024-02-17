class Solution {
public:
    bool isAnagram(string s, string t) {
        int u = 0;
        if(s.size()!=t.size()){
            return false;
        }
        else{
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s == t){
                return true;
            }
            else{
                return false;
            }
            
        }
    }
};