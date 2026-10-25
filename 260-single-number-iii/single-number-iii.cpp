class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         int n=nums.size();
            long long xr=0;
            for(int i=0;i<n;i++){
                xr^=nums[i];
            }
            long long diff=-xr&xr;
            
            int zero=0;
            int one=0;
            for(int i=0;i<n;i++){
                if(nums[i]&diff)zero^=nums[i];
                else one^=nums[i];
            }

            return {zero,one};
    }
};