class Solution {
public:
    long long findMax(vector<int> &nums){
        long long n=nums.size();
        long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        return maxi;
    }

    long long hours(vector<int> & piles ,int k){
         long long n=piles.size();
        long long t=0;
        for(int i=0;i<n;i++){
            t+=(piles[i]+k-1)/k;
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n=piles.size();
        int low=1;
        long long high=findMax(piles);
        long long ans=-1;
        
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long time=hours(piles,mid);
            if(time>h){
                low=mid+1;
            }
            else {
                ans=mid;
                 high=mid-1;
            }
        }
        return low;
    }

};