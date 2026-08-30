class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        map <int,int> mpp;
        for(int i=0;i<n;i++){
            if(nums[i]%2 ==0){
                mpp[nums[i]]++;
            }
        }
        int maxm=-1;
        int ans=-1;
        for(auto it: mpp){
            if(it.second > maxm){
                maxm=it.second;
                ans=it.first;
            }
            else if(it.second == maxm) {
                 maxm=it.second;
                ans=min(it.first,ans);   
            }
        }
        return ans;
    }
};