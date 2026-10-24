class Solution {
public:
    int minBitFlips(int start, int goal) {
         int count=0;
        //Your code goes here
        while(start || goal){
            count+=(start&1)^(goal&1);
            goal=goal>>1;
            start=start>>1;
        }
        return count;
    }
};