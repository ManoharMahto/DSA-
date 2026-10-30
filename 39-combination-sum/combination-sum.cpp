class Solution {
public:
    void helper(int i,int n,int target,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ele){
        if(i==n){
            if(target==0)
                ans.push_back(ele);
            return;
        }

        if(nums[i]<=target){
            ele.push_back(nums[i]);
            helper(i,n,target-nums[i],nums,ans,ele);
            ele.pop_back();
        }
        helper(i+1,n,target,nums,ans,ele); 
         
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //your code goes here;
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>ele;
        helper(0,n,target,candidates,ans,ele);
        return ans;
    }
};