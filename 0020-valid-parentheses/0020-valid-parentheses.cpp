class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i = 0; i < s.size(); i++){
            if(stk.empty() || s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
                continue;
            }
            
            if(s[i] == ')'){
                if(stk.top() == '('){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i] == '}'){
                if(stk.top() == '{'){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            if(s[i] == ']'){
                if(stk.top() == '['){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
        }
        return stk.empty();
    }
};