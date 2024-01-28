class Solution {
public:
    int fib(int n) {
        //first term
        if(n==0){
            return 0;
        }
        //second term
        if(n==1){
            return 1;
        }
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
};