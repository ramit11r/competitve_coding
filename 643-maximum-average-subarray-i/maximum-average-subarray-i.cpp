class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        double sum=0;
        double ans=-DBL_MAX;
        if(n==1){
            return double(nums[0]);
        }
        for(j;j<n;j++){
            sum+=nums[j];
            if(j-i+1==k){
                double a=sum/k;
                ans=max(ans,a);
                sum-=nums[i];
                i++;
            }
        }
        return ans;
    }
};