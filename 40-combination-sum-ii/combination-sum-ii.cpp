class Solution {
public:
    void helper(int i,int n,vector<int>ele,int sum,vector<vector<int>>&ans,int target,vector<int>& nums){
        if(i==n){
            if(sum==target)ans.push_back(ele);
            return;
        }
        if(sum>target)return;
        ele.push_back(nums[i]);
        sum+=nums[i];
        helper(i+1,n,ele,sum,ans,target,nums);

        while (i + 1 < n && nums[i] == nums[i + 1]) {
            i++;
        }

        ele.pop_back();
        sum-=nums[i];
        helper(i+1,n,ele,sum,ans,target,nums);
    }
    vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
        //your code goes here
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ele;
        int sum=0;
        helper(0,n,ele,sum,ans,target,candidates);
        return ans;
    }
};