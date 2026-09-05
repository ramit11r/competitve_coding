class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mn(nums.size());
        mn[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            mn[i]=min(nums[i],mn[i+1]);
        }
        int mx=0;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            if(mx-mn[i]<=k) return i;
        }
        return -1;
    }
};