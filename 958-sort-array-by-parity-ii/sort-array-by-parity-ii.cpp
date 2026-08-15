class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int i=0,j=0;
        for(j;j<n;j++){
            if(nums[j]%2==0){
                ans[i]=nums[j];
                i+=2;;
            }
        }
        i=1;
        for(j=0;j<n;j++){
            if(nums[j]%2!=0){
                ans[i]=nums[j];
                i+=2;
            }
        }
        return ans;
    }
};