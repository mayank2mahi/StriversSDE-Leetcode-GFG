class Solution {
public:
    int sievet(int n){
        vector<long long> v(n, 0);
        for(long long i = 2; i < n; i++){
            if(v[i] == 0){
                for(long long j = i*i; j < n; j+=i){
                    v[j] = 1;
                }
            }
        }
        int c = 0;
        for(long long i = 2; i < n; i++){
            if(v[i] == 0){
                c++;
            }
        }
        return c;
    }
    
    int countPrimes(int n) {
        return sievet(n);
    }
};