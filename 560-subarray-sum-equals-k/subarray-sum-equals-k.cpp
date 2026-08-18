class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[sum]++;
            sum+=nums[i];
            if(mp.contains(sum-k)){
                ans+=mp[sum-k];
            }
        }
        return ans;
    }
};