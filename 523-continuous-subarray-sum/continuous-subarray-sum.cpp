class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> ind{
            {0,-1}
        };
        int j=0,sum=0;
        for(j;j<n;j++){
            sum+=nums[j];
            int rem=sum%k;
            if(!ind.contains(rem)){
                ind[rem]=j;
            }
            if(ind.contains(rem) && j-ind[rem]>=2){
                return true;
            }
        }
        return false;
    }
};