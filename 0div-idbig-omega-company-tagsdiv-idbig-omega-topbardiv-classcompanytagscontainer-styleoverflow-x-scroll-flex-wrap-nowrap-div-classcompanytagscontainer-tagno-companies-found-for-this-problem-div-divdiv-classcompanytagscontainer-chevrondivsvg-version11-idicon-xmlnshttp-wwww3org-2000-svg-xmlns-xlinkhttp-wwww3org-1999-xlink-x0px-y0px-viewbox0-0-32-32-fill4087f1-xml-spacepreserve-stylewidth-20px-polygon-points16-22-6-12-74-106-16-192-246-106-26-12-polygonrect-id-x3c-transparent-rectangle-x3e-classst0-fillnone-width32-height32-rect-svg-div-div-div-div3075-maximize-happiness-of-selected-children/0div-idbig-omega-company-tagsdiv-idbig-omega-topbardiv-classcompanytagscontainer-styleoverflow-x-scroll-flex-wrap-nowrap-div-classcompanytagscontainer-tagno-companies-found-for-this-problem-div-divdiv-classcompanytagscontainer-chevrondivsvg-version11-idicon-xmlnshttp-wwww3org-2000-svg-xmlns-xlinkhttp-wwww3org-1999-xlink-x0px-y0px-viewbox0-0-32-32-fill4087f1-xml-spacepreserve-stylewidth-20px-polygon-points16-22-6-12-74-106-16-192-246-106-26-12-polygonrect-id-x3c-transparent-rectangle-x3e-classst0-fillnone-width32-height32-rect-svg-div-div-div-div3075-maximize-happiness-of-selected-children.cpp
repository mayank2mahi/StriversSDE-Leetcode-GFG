class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long s = 0;
        
        sort(happiness.begin(),happiness.end(),greater<int>());
        int flag=1;
        
        for(int i=0;i<k;i++)
        {
            s=s+happiness[i];
            
            if(i+1>=k)
             break;
            
            if(happiness[i+1]-flag>=0)
            {
            happiness[i+1]=happiness[i+1]-flag;
            flag++;
            }
            else 
             break;
        }
        
       
        return s;
    }
};