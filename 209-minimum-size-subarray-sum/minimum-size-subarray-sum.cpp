class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int b=0;
        int f=0;
        int sum=0;
        int ans=INT_MAX;
        for(f;f<nums.size();f++){
            sum+=nums[f];
            while(sum>=target){
                sum-=nums[b];
                ans=min(ans,f-b+1);
                b++;
            }
        }
        return (ans==INT_MAX?0:ans);
    }
};