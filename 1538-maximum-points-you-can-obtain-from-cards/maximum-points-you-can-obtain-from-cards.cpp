class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size()-1;
        int ans;
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+cardPoints[i];
        }
        ans=sum;
        for(int i=k-1;i>=0;i--){
            sum=sum-cardPoints[i];
            sum=sum+cardPoints[n];
            n--;
            ans=max(ans,sum);
        }
        return ans;
    }
};