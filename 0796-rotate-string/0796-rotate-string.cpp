class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s + s;
        if(s.size()!=goal.size()){
            return false;
        }
        if(temp.find(goal)==-1){
            return false;
        }
        else{
            return true;
        }
    }
};