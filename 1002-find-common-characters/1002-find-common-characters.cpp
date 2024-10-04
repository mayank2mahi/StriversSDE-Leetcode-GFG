class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>main(26,0);
        for(int i=0;i<words[0].size();i++){
            main[words[0][i]-'a']++;
        }
        for(int i=1;i<words.size();i++){
            vector<int>temp(26,0);
            
            for(int j=0;j<words[0].size();j++){
                 temp[words[i][j]-'a']++;
            }
            
            for(int j=0;j<26;j++){
                 main[j]=min(main[j],temp[j]);
            }
        }
                      
        
        vector<string>s;
        for(int i=0;i<26;i++){
            for(int j=0;j<main[i];j++){
                s.push_back(string(1,i+'a'));
            }
        }
        return s;
    }
};