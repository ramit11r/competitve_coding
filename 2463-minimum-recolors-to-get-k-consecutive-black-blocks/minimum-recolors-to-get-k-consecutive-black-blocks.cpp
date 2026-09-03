class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int i=0;
        int j=0;
        int count=0;
        int ans=INT_MAX;
        for(j;j<n;j++){
            if(blocks[j]=='W') count++;
            if(j-i+1==k){
                ans=min(ans,count);
                if(blocks[i]=='W') count--;
                i++;
            }
        }
        return ans;
    }
};