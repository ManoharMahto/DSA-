#include<iostream>
 #include<vector>
 using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //optimal approch to solve the question
       int n=nums.size();
       int low=0;
       int high=n-1;
       int num1;
       int num2;
       vector<int>nums2=nums;
       sort(nums.begin(),nums.end());

       while(low<high){
        int sum=nums[low]+nums[high];
        if(sum==target){
            num1=nums[low];
            num2=nums[high];
            break;
        }
        else if(sum>target) high--;
        else low++;
       }

        low=-1;
       for(int i=0;i<n;i++){
        if(nums2[i]==num1 && low==-1) low=i;
        else if(nums2[i]==num2) high=i;
       }

       return {low,high};
    }
};
    
    /* 
    //Brute force approch
     int n=nums.size();
       for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
       } 

    */
