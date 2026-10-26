class Solution {
public:
    bool isAlNum(char ch){
        ch=tolower(ch);
        if(ch>='0' && ch<='9' || ch>='a' && ch<='z') return true;
        else return false;
    }
    bool isPalindrome(string s) {
        int n=s.size()-1;
        int i=0;
        while(i<n){
            if(!isAlNum(s[i])) {
                i++;
                continue;
            }
            if(!isAlNum(s[n])){
                n--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[n])){
                return false;
            }
            i++;
            n--;
        }
        return true;
    }
};