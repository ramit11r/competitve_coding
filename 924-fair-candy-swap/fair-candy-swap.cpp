class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        int sum=reduce(aliceSizes.begin(),aliceSizes.end());
        int sum_b=reduce(bobSizes.begin(),bobSizes.end());
        int d=(sum-sum_b)/2;
        int i=0,j=0;
        while(i<aliceSizes.size() && j<bobSizes.size()){
            int diff=aliceSizes[i]-bobSizes[j];
            if (diff==d) return{aliceSizes[i],bobSizes[j]};

            if(diff<d) i++;
            else j++;
        }
        return {-1,-1};
    }
};