class Solution {
public:
    double myPow(double x, int n) {
         double ans=1;
        int negPow=0;
        if(n<0)negPow=1;
        long long num=abs((long long)n);
        while(num>0){
            if(num&1){
                ans*=x;
                num=num-1;
            }
            else{
                x=x*x;
                num=num/2;
            }
        }
            if(negPow) return 1.0/ans;
            return ans;
    }
};