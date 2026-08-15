class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long n=s.size();
        long long substrcount=0;
        long long count=0;
        for(auto i=0;i<n;i++){
            if(s[i]==c){
                substrcount+=1+count;
                count++;
            }
        }
        return substrcount;
    }
};