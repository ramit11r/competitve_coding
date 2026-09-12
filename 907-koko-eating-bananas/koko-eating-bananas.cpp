class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int tothr=0;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int k=low+(high-low)/2;
            tothr=0;
            for(int i=0;i<n;i++){
                tothr+=(piles[i]+k-1)/k;
            }
            if(tothr<=h){
                high=k;
            }
            else{
                low=k+1;
            }
        }
        return high;
    }
};