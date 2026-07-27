class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ss;
    void allss(int i,vector<int> nums){
        if(i==nums.size()){
            ans.push_back(ss);
            return;
        }
        ss.push_back(nums[i]);
        allss(i+1,nums);
        ss.pop_back();
        allss(i+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        allss(0,nums);
        return ans;
    }
};