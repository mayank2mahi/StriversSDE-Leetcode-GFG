class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int n = word.size();
        int c = 1;
        for(int i = k; i < n; i += k){
            string prefix = word.substr(0,n-i);
            string suffix = word.substr(i,n-i);
            if(prefix == suffix){
                return c;
            }   
            c++;    
        }
        return c;
    }
};