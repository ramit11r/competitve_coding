class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1,j=nums.size()-1;
        int pivot;
        if(nums.size()<=1)  return;
        while(i>0){
            if(nums[i]>nums[i-1]){ 
                pivot=i-1;
                break;
            }
            i--;
            if(i==0){
                int left=0,right=nums.size()-1;
                while(left<right){
                    swap(nums[left],nums[right]);
                    left++;
                    right--;
                }
                return;
            }
        }
        while(j>=i){
            if(nums[j]>nums[pivot]){
                swap(nums[j],nums[pivot]);
                break;
            }
            j--;
        }
        int left=pivot+1;
        int right=nums.size()-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};