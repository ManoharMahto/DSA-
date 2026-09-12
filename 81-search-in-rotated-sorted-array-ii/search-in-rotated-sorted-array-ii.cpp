class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int k=target;
          int high=nums.size()-1;
    int low=0;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==k) return true;
        else if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        else if(nums[low]<=nums[mid]){
            if(k>=nums[low] && k<=nums[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if(k>=nums[mid] && k<=nums[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
      }
      return false;
    }
};