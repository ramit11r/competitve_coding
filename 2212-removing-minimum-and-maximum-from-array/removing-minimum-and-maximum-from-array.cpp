class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mi=0, mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[mi]){
                mi=i;
            }
            if(nums[i]>nums[mx]){
                mx=i;
            }
        }
        int left=max(mx,mi)+1;
        int right=nums.size()-min(mx,mi);
        int both=min(mi,mx)+1+nums.size()-max(mx,mi);
        return min({left,right,both});
    }
};