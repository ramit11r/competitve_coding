class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=-1;
        int i=0,j=0;
        int add=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        for(j;j<n;j++){
            add+=nums[j];
            if(sum-x==add){
                ans=max(ans,j-i+1);
            }
            while(add>sum-x && i<=j){
                add-=nums[i];
                i++;
                if(add==sum-x){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return (ans==-1?ans:(n-ans));
    }
};