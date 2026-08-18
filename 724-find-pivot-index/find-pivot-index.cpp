class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int left=0;
        int leftsum=0;
        int rightsum=0;
        for(left;left<nums.size();left++){
            rightsum=sum-leftsum-nums[left];
            if(leftsum==rightsum){
                return left;
            } 
            leftsum+=nums[left];        
        }
        return -1;
    }
};