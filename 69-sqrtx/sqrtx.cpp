class Solution {
public:
    int mySqrt(int x) {
        int low=0;int high=x;
        int ans=0;
        while(low<=high){
             int mid=low+(high-low)/2;
             long long num=(long long)mid*mid;
            if(num > x) high=mid-1;
            if( num<=x){
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
};