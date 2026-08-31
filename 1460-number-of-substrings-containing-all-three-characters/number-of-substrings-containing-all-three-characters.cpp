class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0;
        int ans=0;
        unordered_map<char,int> mp={
            {'a',0},
            {'b',0},
            {'c',0}
        };
        for(j;j<s.size();j++){
            mp[s[j]]++;
            while(mp['a']>=1 && mp['b']>=1 && mp['c']>=1){
                ans+=s.size()-j;
                mp[s[i]]--;
                i++;
            }
        }
        
        return ans;
    }
};