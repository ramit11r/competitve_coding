class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int ans=0;
        if(n==100000){
            ans++;
            n--;
        }
        for(int i=1000;i<=n;i++){
            ans++;
        }
        return ans;
    }
};