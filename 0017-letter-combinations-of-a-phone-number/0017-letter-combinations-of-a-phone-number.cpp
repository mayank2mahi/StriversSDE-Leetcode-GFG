class Solution {
private:
    void solve(vector<string>& ans, string output, string digits, int index, string mapping[]){
        //base case
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        
        int number = digits[index] - '0';
        string value = mapping[number];
        
        for(int i = 0; i < value.length(); i++){
            output.push_back(value[i]);
            solve(ans, output, digits, index+1, mapping);
            output.pop_back();
        }
    }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output;
        
        if(digits.length()==0){
            return ans;
        }
        
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(ans, output, digits, index, mapping);
        return ans;
    }
};