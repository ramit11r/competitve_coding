class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if (nums[i]<10 && nums[i]==i) return i;
            int a=nums[i];
            int sum=0;
            while(a>0){
                int rem=a%10;
                sum+=rem;
                a=a/10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};