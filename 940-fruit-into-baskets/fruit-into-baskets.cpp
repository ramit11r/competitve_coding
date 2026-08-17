class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int b=0;
        int f=0;
        int ans=0;
        unordered_map<int,int> mp;
        for(f;f<n;f++){
            mp[fruits[f]]++;
            while(mp.size()>2){
                mp[fruits[b]]--;
                if(mp[fruits[b]]==0) mp.erase(fruits[b]);
                b++;
            }
            ans=max(ans,f-b+1);
        }
        return ans;
    }
};