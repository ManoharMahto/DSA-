class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.size() > k){

            string tempAns = "";
            for(int i=0; i < s.size(); i+=k){

                string temp = s.substr(i , k);
                int sum = 0;
                for(int it : temp){
                    sum += (it - '0');
                }
                tempAns += to_string(sum);
            }
            s = tempAns;
        }
        return s;
    }
};