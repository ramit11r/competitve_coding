class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int ans=0;
         unordered_map<char,int> abc;
        for(j;j<n;j++){
            abc[s[j]]++;
            while(abc[s[j]]>2){
                abc[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }    
        return ans;
    }
};