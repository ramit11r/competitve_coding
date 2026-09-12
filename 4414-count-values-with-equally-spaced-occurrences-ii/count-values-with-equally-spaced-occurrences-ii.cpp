class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]].push_back(0);
            }
            mp[nums[i]][0]++;
            mp[nums[i]].push_back(i);
        }
        for(auto &p:mp){
            int key=p.first;
            vector<int> v=p.second;
            if(v.size()>=3){
                int distance=v[2]-v[1];
                for(int i=3;i<v.size();i++){
                    if(v[i]-v[i-1]==distance){
                        if(i==v.size()-1){
                            count++;
                        }
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return count;
    }
};