class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestval=nums[0];
        int ans=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int a=nums[i];
            int b=nums[i]+bestval;
            bestval=max(a,b);
            ans=max(ans,bestval);
        }
        return ans;
    }
};