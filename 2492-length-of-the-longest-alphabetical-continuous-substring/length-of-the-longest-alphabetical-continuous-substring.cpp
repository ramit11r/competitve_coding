class Solution {
public:
    int longestContinuousSubstring(string s) {
        int i=0;
        int size=0;
        int ans=1;
        for(int j=1;j<s.size();j++){
            if(s[j]-s[j-1]==1){
                size=j-i+1;
            }
            ans=max(ans,size);
            if(s[j]-s[j-1]!=1){
                i=j;
                size=0;
            }
        }
        return ans;
    }
};