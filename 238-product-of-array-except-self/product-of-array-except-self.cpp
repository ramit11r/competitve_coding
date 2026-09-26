class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prepro(nums.size(),1);
        int n=nums.size();
        int pre=1;
        for(int i=0;i<n;i++){
            prepro[i]=pre;
            pre*=nums[i];
        }
        int post=1;
        for(int i=n-1;i>=0;i--){
            prepro[i]*=post;
            post*=nums[i];
        }
        return prepro;
    }
};