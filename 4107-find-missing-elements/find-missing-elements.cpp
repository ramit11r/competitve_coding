class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max_value=*max_element(nums.begin(),nums.end());
        int min_value=*min_element(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=min_value;i<max_value;i++){
            if(mp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};