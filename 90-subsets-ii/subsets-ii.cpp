class Solution {
public:
    void helper(int i,int n,vector<int>ele,vector<vector<int>>&ans,vector<int>& nums){
        if(i==n){
            ans.push_back(ele);
            return;
        }

        ele.push_back(nums[i]);
        helper(i+1,n,ele,ans,nums);

        while(i+1<n && nums[i]==nums[i+1]){
            i++;
        }

        ele.pop_back();
        helper(i+1,n,ele,ans,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ele;
        helper(0,n,ele,ans,nums);
        return ans;
    }
};