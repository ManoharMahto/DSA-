class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            int num = abs(nums[i]);
            if(nums[num-1] < 0 ) return num;
            nums[num-1]=-nums[num-1];
        }
        return n;
    }
};