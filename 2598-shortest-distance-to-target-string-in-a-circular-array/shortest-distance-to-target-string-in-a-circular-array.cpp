class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=INT_MAX;
        int n=words.size();
        for(int i=0;i<words.size();i++){
            if(words[i%words.size()]==target){
                int dist=min(abs(i-startIndex),n-abs(i-startIndex));
                ans=min(ans,dist);
            } 
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};