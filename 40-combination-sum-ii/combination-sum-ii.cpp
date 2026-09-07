class Solution {
public:
    vector<vector<int>> ansss;
    vector<int> ans;
    void sum(int i,vector<int>& candidates, int target){
        if( target<0){
            return;
        }
        if(target==0){
            ansss.push_back(ans);
            return;
        }
        for(int s=i;s<candidates.size();s++){
            if(s>i && candidates[s]==candidates[s-1]){
                continue;
            }
            ans.push_back(candidates[s]);
            sum(s+1,candidates,target-candidates[s]);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        sum(0,candidates,target);
        return ansss;
    }
};