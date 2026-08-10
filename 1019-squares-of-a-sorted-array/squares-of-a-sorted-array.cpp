class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size()-1;
        int i=0;
        int j=nums.size()-1;
        vector<int> ans(nums.size(),0);
        while(i<=n){
            if(abs(nums[i])>abs(nums[n])){
                ans[j]=pow(nums[i],2);
                i++;
                j--;
            }
            else{
                ans[j]=pow(nums[n],2);
                n--;
                j--;
            }
        }
        return ans;
    }
};