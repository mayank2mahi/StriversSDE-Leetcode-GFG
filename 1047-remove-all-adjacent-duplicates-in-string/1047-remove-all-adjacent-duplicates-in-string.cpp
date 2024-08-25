class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        
        string h;
        while(!st.empty()){
            h += st.top();
            st.pop();
        }
        reverse(h.begin(), h.end());
        return h;
    }
};
