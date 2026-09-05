class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        if(nums.size()==1) return 1;
        for(int j=0;j<n;j++){
            mp[nums[j]]++;
        }
        int i=0,j=1,count=0;
        for(j;j<=n;j++){
            if(j==n||nums[j]!=nums[i]){
                int block=j-i;
                if(block==mp[nums[i]]){
                    count++;
                }
                i=j;
            }
        }
        return count;
    }
};