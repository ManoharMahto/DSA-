class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        vector <int>nums=bloomDay;
        long long n=nums.size();
        if((long long)m*k>n) return -1;
   int mini=*min_element(nums.begin(),nums.end());
   int maxi=*max_element(nums.begin(),nums.end());
   int day=-1;
    while(mini<=maxi){
        int mid=mini+(maxi-mini)/2;
        int count=0;
        int ans=0;
    for(int j=0;j<n;j++){
        if(nums[j]<=mid){
            count++;
        }
        else{
            ans+=count/k;
            count=0;
        }
    }
    ans+=count/k;
    if(ans<m)mini=mid+1;
    else if(ans>=m) {
        day=mid;
        maxi=mid-1;
        
    } 
    }
    return day;
    }
};