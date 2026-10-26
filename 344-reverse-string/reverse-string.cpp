class Solution {
public:
    void helper(vector<char>&s,int i,int n){
        if(i>=n)return;
        char temp=s[n];
        s[n]=s[i];
        s[i]=temp;
        helper(s,i+1,n-1);
    }
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        int n=s.size();
        helper(s,0,n-1);
        return s;
	}
};