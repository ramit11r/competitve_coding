class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int asum=0;
        sort(nums.begin(), nums.end());
        sum=(n*(n+1))/2;
        for(int i=0;i<n;i++){
            asum=asum+nums[i];
        }
        return {sum-asum};
    }
};