class Solution {
public:
    int myAtoi(string s) {

        int n = s.size();
        int i = 0;
        int sign = 1;
        long long ans = 0;

        if(s[i] == ' '){
            while(s[i] == ' ' && i < n){
                i++;
            }
        }

        if(s[i] == '-'){
            sign = -1;
            i++;
        }
        else if(s[i] == '+') i++;

        while(s[i] >='0' && s[i] <= '9' && i<n ){
            int d = s[i] - '0';

            if(ans > INT_MAX/10 || (ans == INT_MAX / 10 && d > 7)){
                    return sign == 1 ? INT_MAX : INT_MIN ;
            }
            ans = ans*10 + d ;
            i++;
        }
        return ans*sign;
    }
};