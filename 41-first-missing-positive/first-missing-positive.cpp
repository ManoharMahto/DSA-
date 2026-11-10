class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
       set <int> st;

       for(int i = 0;i < n;i++){
            st.insert(nums[i]);
       }

       int num = 1;
       for(auto it : st){
        if(it <= 0) continue;
        if(it != num)return num;
        num++;
       }
       return num;
    }
};