class Solution {
public:
    bool isAlNum(char ch){
        if(ch>='0' && ch<='9' || tolower(ch)>='a' && tolower(ch) <='z' ) return true;
        else return false;
    }
    bool isPalindrome(string s){
    int low=0; int high=s.size()-1;
    while(low<=high){
     if(!isAlNum(s[low])){
        low++;
        continue;
     }
     if(!isAlNum(s[high])){
        high--;
        continue;
     }
     if(tolower(s[low]) != tolower(s[high])) return false;
     low++;
     high--;
    }
     return true;
    }
};