class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        int ans=0;
        int count=0;
        unordered_map<char,int> mp;
        for( j;j<n;j++){
            mp[s[j]]++;
            count=max(count,mp[s[j]]);
            while((j-i+1)-count>k){
                mp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};