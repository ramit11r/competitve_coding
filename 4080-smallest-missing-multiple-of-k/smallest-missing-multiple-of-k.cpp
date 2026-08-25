class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int a=1;
        unordered_set<int> st(nums.begin(),nums.end());
        while(st.count(k*a)){
            a++;
        }
        return k*(a);
    }
};