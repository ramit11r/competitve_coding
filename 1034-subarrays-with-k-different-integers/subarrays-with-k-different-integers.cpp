class Solution {
public:
    int helper(vector<int>&nums,int k){
        int n=nums.size();
        unordered_map<int,int> mp;
        int count=0;
        int elesize=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(mp[nums[j]]==0){
                elesize++;
            }
            mp[nums[j]]++;
            while(elesize>k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    elesize--;
                }
                i++;
            }
            count+=j-i+1;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};