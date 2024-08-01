class Solution {
public:
    bool pali(string h, int l, int r) {
    while (l < r) {
        if (h[l] == h[r]) {
            l++;
            r--;
        }
        else{
            return false;
        }
    }
    return true;
}

    
    
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return pali(s, l + 1, r) || pali(s, l, r - 1);
            }
        }
        return true;
    }
};