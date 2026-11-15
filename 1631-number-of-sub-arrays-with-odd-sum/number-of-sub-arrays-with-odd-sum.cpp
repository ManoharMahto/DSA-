class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int odd = 0;
        int even = 1;
        int count = 0;
        long long sum = 0;
        const int mod = 1e9 + 7;
        for(int i = 0;i < n; i++){
            sum+= arr[i];
            if(sum % 2 == 0){
                even ++ ;
                count = (count + odd) % mod;
            }
            else{
                odd++;
                count = (count + even) % mod;
            }
        }
        return count;
    }
};