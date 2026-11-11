class Solution {
public:
    int reverse(int x) {
        if(x == INT_MIN) return 0;
        int sign = 1 ;
        if(x < 0) sign = -1;
        x = abs(x);
        int ans = 0;

        while(x){
            int rem = x % 10;

            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) return 0;

            ans = ans * 10 + rem;
            x = x / 10;
        }
        return ans * sign;
    }
};