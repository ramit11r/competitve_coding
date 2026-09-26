class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count[101]={};
        int ans=0;
        vector<int> sorted;
        for(int a: heights){
            count[a]++;
        }
        for(int i=0;i<=100;i++){
            while(count[i]>0){
                sorted.push_back(i);
                count[i]--;
            }
        }
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=sorted[i]){
                ans++;
            }
        }
        return ans;
    }
};