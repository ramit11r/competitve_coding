class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int i=0,j=0;
        int ans=0;
        for(j;j<n;j++){
            mp[s[j]]++;
            if(mp[s[j]]==1){
                ans=max(ans,j-i+1);
            }
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};