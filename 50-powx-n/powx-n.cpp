class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
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
            if(n<0) return 1/ans;
            return ans;
    }
};