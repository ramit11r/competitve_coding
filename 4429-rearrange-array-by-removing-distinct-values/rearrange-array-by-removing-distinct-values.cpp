class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        while(!mp.empty()){
            for(auto a=mp.begin();a!=mp.end(); ){
                ans.push_back(a->first);
                a->second--;

                if(a->second==0){
                    a=mp.erase(a);
                }
                else{
                    a++;
                }
            }
        }
        return ans;
    }
};