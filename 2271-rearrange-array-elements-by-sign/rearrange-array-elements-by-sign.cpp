class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n = nums.size();
        vector<int> ans(n, 0);
        int c1=0;
        int c2=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[c1]=nums[i];
                c1+=2;
            }
            else{
                ans[c2]=nums[i];
                c2+=2;
            }
        }
        return ans;
    }
};