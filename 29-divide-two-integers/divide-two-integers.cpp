class Solution {
public:
    int divide(int dividend, int divisor) {
         //removing edge case
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        
        //getting sign
        bool sign=true;
        if(dividend>0 && divisor<0 || dividend<0 && divisor>0 ) sign=false;

        long long dd=abs((long long)dividend);
        long long dr=abs((long long)divisor);

        long long q=0;
        for(int i=31 ;i>=0;i--){
            if((dr<<i) <= dd ) {
                q+=1LL<<i;
                dd-=dr<<i;
            }  
        }
        return sign ? q : -q;
    }
};