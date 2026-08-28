class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int n=nums.size();
        map <int ,int> mpp;
        int sum=0;
        mpp[sum]++;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int required=sum-k;
            count+=mpp[required];
            mpp[sum]++;
            
            
        }
        return count;
    }
};