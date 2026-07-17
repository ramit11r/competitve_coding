class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1,j=nums.size()-1;
        int pivot=-1;
        if(nums.size()<=1)  return;
        while(i>0){
            if(nums[i]>nums[i-1]){ 
                pivot=i-1;
                break;
            }
            i--;
        }
        if(pivot==-1){
                reverse(nums.begin() + pivot + 1, nums.end());
                return;
            }
        while(j>=i){
            if(nums[j]>nums[pivot]){
                swap(nums[j],nums[pivot]);
                break;
            }
            j--;
        }
       reverse(nums.begin() + pivot + 1, nums.end());
    }
};