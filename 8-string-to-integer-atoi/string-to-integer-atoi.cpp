class Solution {
public:
    bool isDigit(char c){
        if(c >= 48 && c <=57) return true;
        return false;
    }

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

        if(isDigit(s[i])){
            while(s[i] == '0'){
                i++;
            }   
        }
        else return 0;

        while(isDigit(s[i]) && i<n ){
            int d = s[i] - '0';
            ans = ans*10 + d ;
            i++;

            
            if(-ans <= INT_MIN && sign < 0) return INT_MIN;
            
            else if(ans >= INT_MAX && sign > 0) return INT_MAX;
            

        }

        return ans*sign;
    }
};