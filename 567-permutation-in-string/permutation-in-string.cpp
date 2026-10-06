class Solution {
public:
    bool check1(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        
        int freq[26]={0};
        for(int i=0;i<n1;i++){
            int idx=s1[i]-'a';
            freq[idx]++;
        }

        for(int i=0;i<n2-n1+1;i++){
            int window[26]={0};
        for(int j=i;j<i+n1;j++){
            int idx=s2[j]-'a';
            window[idx]++;
        }
         if(check1(freq,window)==true) return true;
        }
        return false;
    }
};