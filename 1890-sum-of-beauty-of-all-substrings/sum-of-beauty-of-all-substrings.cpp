class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int i=0,j;
        int count=0;
        vector<int> mp(26,0);
        for(i;i<n;i++){
            int mx=INT_MIN;
            int mn=INT_MAX;
            mp[ s[i]-'a']++;
            for(j=i+1;j<n;j++){
                mp[s[j]-'a']++;
                mn=INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (mp[k] > 0) {
                        mn = min(mn, mp[k]);
                    }
                }
                mx=*max_element(mp.begin(),mp.end());
                if(mx-mn>0){
                    count+=(mx-mn);
                }
            }
            fill(mp.begin(), mp.end(), 0);
        }
        return count;
    }
};