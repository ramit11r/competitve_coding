class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int count=0;
        int ans=0;
        for(j;j<n;j++){
            if(nums[j]==0){
                count++;
            }
            if(count>k){
                if(nums[i]==0){
                    count--;
                }
                i=i+1;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};