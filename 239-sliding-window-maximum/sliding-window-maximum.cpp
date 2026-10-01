class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        int i=0,j=0;
        for(j;j<nums.size();j++){
            pq.push({nums[j],j});
            if(j-i+1==k){
                ans.push_back(pq.top().first);
                i++;
                while(!pq.empty() && pq.top().second<i){
                    pq.pop();
                }
            }
        }
        return ans;
    }
};